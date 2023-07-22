#include "videoplayer.h"
#include "ui_videoplayer.h"

#include <QCoreApplication>
#include <QFileInfoList>
#include <QDir>
#include <QProcess>


QProcess * mypro;
VideoPlayer::VideoPlayer(QWidget *parent)
    : QMainWindow(parent)
{
    QFile file(":/style/video_style.qss");

    /* 判断文件是否存在 */
    if (file.exists() ) {
        /* 以只读的方式打开 */
        file.open(QFile::ReadOnly);
        /* 以字符串的方式保存读出的结果 */
        QString styleSheet = QLatin1String(file.readAll());
        /* 设置全局样式 */
        this->setStyleSheet(styleSheet);

        /* 关闭文件 */
        file.close();
    }

    /* 视频播放器布局初始化 */
    videoLayout();

    /* 媒体初始化 */
    mediaPlayerInit();

    /* 扫描本地视频 */
    scanVideoFiles();

    /* 设置按钮的属性 */
    pushButton[0]->setCheckable(true);
    pushButton[4]->setCheckable(true);

    /* 按钮连接信号槽 */
    connect(pushButton[0], SIGNAL(clicked()),
            this, SLOT(btn_play_clicked()));
    connect(pushButton[1], SIGNAL(clicked()),
            this, SLOT(btn_next_clicked()));
    connect(pushButton[2], SIGNAL(clicked()),
            this, SLOT(btn_volmedown_clicked()));
    connect(pushButton[3], SIGNAL(clicked()),
            this, SLOT(btn_volmeup_clicked()));
    connect(pushButton[4], SIGNAL(clicked()),
            this, SLOT(btn_fullscreen_clicked()));

    /* 列表连接信号槽 */
    connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)),
            this, SLOT(listWidgetCliked(QListWidgetItem*)));

    /* 媒体连接信号槽 */
    connect(videoPlayer,
            SIGNAL(stateChanged(QMediaPlayer::State)),
            this,
            SLOT(mediaPlayerStateChanged(QMediaPlayer::State)));
    connect(mediaPlaylist,
            SIGNAL(currentIndexChanged(int)),
            this,
            SLOT(mediaPlaylistCurrentIndexChanged(int)));
    connect(videoPlayer, SIGNAL(durationChanged(qint64)),
            this,
            SLOT(musicPlayerDurationChanged(qint64)));
    connect(videoPlayer,
            SIGNAL(positionChanged(qint64)),
            this,
            SLOT(mediaPlayerPositionChanged(qint64)));

    /* slider信号槽连接 */
    connect(durationSlider, SIGNAL(sliderReleased()),
            this, SLOT(durationSliderReleased()));
    connect(volumeSlider, SIGNAL(sliderReleased()),
            this, SLOT(volumeSliderReleased()));

}

VideoPlayer::~VideoPlayer()
{
}

void VideoPlayer::videoLayout()
{
    /* 设置位置与大小,这里固定为800, 480 */
    this->setGeometry(0, 0, 824, 600);
    //    this->setMinimumSize(800, 480);
    //    this->setMaximumSize(800, 480);
    QPalette pal;
    pal.setColor(QPalette::WindowText, Qt::white);

    for (int i = 0; i < 3; i++) {
        /* 水平容器 */
        hWidget[i] = new QWidget();
        hWidget[i]->setAutoFillBackground(true);
        /* 水平布局 */
        hBoxLayout[i] = new QHBoxLayout();
    }

    for (int i = 0; i < 2; i++) {
        /* 垂直容器 */
        vWidget[i] = new QWidget();
        vWidget[i]->setAutoFillBackground(true);
        /* 垂直布局 */
        vBoxLayout[i] = new QVBoxLayout();
    }

    for (int i = 0; i < 2; i++) {
        label[i] = new QLabel();
    }

    for (int i = 0; i < 5; i++) {
        pushButton[i] = new QPushButton();
        pushButton[i]->setMaximumSize(44, 44);
        pushButton[i]->setMinimumSize(44, 44);
    }

    /* 设置 */
    vWidget[0]->setObjectName("vWidget0");
    vWidget[1]->setObjectName("vWidget1");
    hWidget[1]->setObjectName("hWidget1");
    hWidget[2]->setObjectName("hWidget2");
    pushButton[0]->setObjectName("btn_play");
    pushButton[1]->setObjectName("btn_next");
    pushButton[2]->setObjectName("btn_volumedown");
    pushButton[3]->setObjectName("btn_volumeup");
    pushButton[4]->setObjectName("btn_screen");

    QFont font;

    font.setPixelSize(18);
    label[0]->setFont(font);
    label[1]->setFont(font);

    pal.setColor(QPalette::WindowText, Qt::white);
    label[0]->setPalette(pal);
    label[1]->setPalette(pal);

    label[0]->setText("00:00");
    label[1]->setText("/00:00");

    durationSlider = new QSlider(Qt::Horizontal);
    durationSlider->setMaximumHeight(15);
    durationSlider->setObjectName("durationSlider");

    volumeSlider = new QSlider(Qt::Horizontal);
    volumeSlider->setRange(0, 100);
    volumeSlider->setMaximumWidth(80);
    volumeSlider->setObjectName("volumeSlider");
    volumeSlider->setValue(50);

    listWidget = new QListWidget();

    listWidget->setObjectName("listWidget");
    listWidget->setVerticalScrollBarPolicy(
                Qt::ScrollBarAlwaysOff);
    listWidget->setHorizontalScrollBarPolicy(
                Qt::ScrollBarAlwaysOff);
    //listWidget->setFocusPolicy(Qt::NoFocus);
    videoWidget = new QVideoWidget();
    videoWidget->setStyleSheet("border-image: none;"
                               "background: transparent;"
                               "border:none");

    /* H0布局 */
    vWidget[0]->setMinimumSize(200, 600);
    vWidget[0]->setMaximumWidth(100);
    videoWidget->setMinimumSize(200, 600);
    hBoxLayout[0]->addWidget(videoWidget);
    hBoxLayout[0]->addWidget(vWidget[0]);

    hWidget[0]->setLayout(hBoxLayout[0]);
    hWidget[0]->setMaximumWidth(830);
    hBoxLayout[0]->setContentsMargins(0, 0, 0, 0);

    setCentralWidget(hWidget[0]);

    /* V0布局 */
    QSpacerItem *vSpacer0 = new
            QSpacerItem(0, 80,
                        QSizePolicy::Minimum,
                        QSizePolicy::Maximum);
    vBoxLayout[0]->addWidget(listWidget);
    vBoxLayout[0]->addSpacerItem(vSpacer0);
    vBoxLayout[0]->setContentsMargins(0, 0, 0, 0);

    vWidget[0]->setLayout(vBoxLayout[0]);

    /* V1布局 */
    /* 底板部件布局 */
    hWidget[1]->setMaximumHeight(15);
    hWidget[2]->setMinimumHeight(65);
    vBoxLayout[1]->addWidget(hWidget[1]);
    vBoxLayout[1]->addWidget(hWidget[2]);
    vBoxLayout[1]->setAlignment(Qt::AlignCenter);

    vWidget[1]->setLayout(vBoxLayout[1]);
    vWidget[1]->setParent(this);
    vWidget[1]->setGeometry(0, this->height(), this->width(), 0);
    vBoxLayout[1]->setContentsMargins(0, 0, 0, 0);
    /* 位于最上层 */
    vWidget[1]->raise();

    /* H1布局 */
    hBoxLayout[1]->addWidget(durationSlider);
    hBoxLayout[1]->setContentsMargins(0, 0, 0, 0);
    hWidget[1]->setLayout(hBoxLayout[1]);

    /* H2布局 */
    QSpacerItem *hSpacer0 = new
            QSpacerItem(300, 80,
                        QSizePolicy::Expanding,
                        QSizePolicy::Maximum);

    hBoxLayout[2]->addSpacing(20);
    hBoxLayout[2]->addWidget(pushButton[0]);
    hBoxLayout[2]->addSpacing(10);
    hBoxLayout[2]->addWidget(pushButton[1]);
    hBoxLayout[2]->addSpacing(10);
    hBoxLayout[2]->addWidget(pushButton[2]);
    hBoxLayout[2]->addWidget(volumeSlider);
    hBoxLayout[2]->addWidget(pushButton[3]);
    hBoxLayout[2]->addWidget(label[0]);
    hBoxLayout[2]->addWidget(label[1]);
    hBoxLayout[2]->addSpacerItem(hSpacer0);
    hBoxLayout[2]->addWidget(pushButton[4]);
    hBoxLayout[2]->addSpacing(20);
    hBoxLayout[2]->setContentsMargins(0, 0, 0, 0);
    hBoxLayout[2]->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    hWidget[2]->setLayout(hBoxLayout[2]);
}

void VideoPlayer::mediaPlayerInit()
{
    videoPlayer = new QMediaPlayer(this);
    mediaPlaylist = new QMediaPlaylist(this);
    /* 确保列表是空的 */
    mediaPlaylist->clear();
    /* 设置视频播放器的列表为mediaPlaylist */
    videoPlayer->setPlaylist(mediaPlaylist);
    /* 设置视频输出窗口 */
    videoPlayer->setVideoOutput(videoWidget);
    /* 设置播放模式，Loop是列循环 */
    mediaPlaylist->setPlaybackMode(QMediaPlaylist::Loop);
    /* 设置默认软件音量为50% */
    videoPlayer->setVolume(50);
}

void VideoPlayer::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    vWidget[1]->setGeometry(0, this->height() - 80, this->width(), 80);
}

void VideoPlayer::btn_play_clicked()
{
    int state = videoPlayer->state();
    switch (state) {
    case QMediaPlayer::StoppedState:
        /* 媒体播放 */
        videoPlayer->play();
        break;

    case QMediaPlayer::PlayingState:
        /* 媒体暂停 */
        videoPlayer->pause();
        break;

    case QMediaPlayer::PausedState:
        /* 设置视频输出窗口 */
        videoPlayer->play();
        break;
    }
}

void VideoPlayer::btn_next_clicked()
{
    videoPlayer->stop();
    int count = mediaPlaylist->mediaCount();
    if (0 == count)
        return;

    /* 列表下一个 */
    mediaPlaylist->next();
    videoPlayer->play();
}

void VideoPlayer::btn_volmeup_clicked()
{
    /* 点击每次音量+5 */
    volumeSlider->setValue(volumeSlider->value() + 5);
    videoPlayer->setVolume(volumeSlider->value());
}

void VideoPlayer::btn_fullscreen_clicked()
{
    /* 全屏/非全屏操作 */
    vWidget[0]->setVisible(!pushButton[4]->isChecked());
}

void VideoPlayer::btn_volmedown_clicked()
{
    /* 点击每次音量-5 */
    volumeSlider->setValue(volumeSlider->value() - 5);
    videoPlayer->setVolume(volumeSlider->value());
}

void VideoPlayer::mediaPlayerStateChanged(
        QMediaPlayer::State
        state)
{
    switch (state) {
    case QMediaPlayer::StoppedState:
        pushButton[0]->setChecked(false);
        break;

    case QMediaPlayer::PlayingState:
        pushButton[0]->setChecked(true);
        break;

    case QMediaPlayer::PausedState:
        pushButton[0]->setChecked(false);
        break;
    }
}

void VideoPlayer::listWidgetCliked(QListWidgetItem *item)
{
    videoPlayer->stop();
    mediaPlaylist->setCurrentIndex(listWidget->row(item));
    videoPlayer->play();
}

void VideoPlayer::mediaPlaylistCurrentIndexChanged(
        int index)
{
    if (-1 == index)
        return;

    /* 设置列表正在播放的项 */
    listWidget->setCurrentRow(index);
}

void VideoPlayer::musicPlayerDurationChanged(
        qint64 duration)
{
    durationSlider->setRange(0, duration / 1000);
    int second  = duration / 1000;
    int minute = second / 60;
    second %= 60;

    QString mediaDuration;
    mediaDuration.clear();

    if (minute >= 10)
        mediaDuration = QString::number(minute, 10);
    else
        mediaDuration = "0" + QString::number(minute, 10);

    if (second >= 10)
        mediaDuration = mediaDuration
                + ":" + QString::number(second, 10);
    else
        mediaDuration = mediaDuration
                + ":0" + QString::number(second, 10);

    /* 显示媒体总长度时间 */
    label[1]->setText("/" + mediaDuration);
}

void VideoPlayer::mediaPlayerPositionChanged(
        qint64 position)
{
    if (!durationSlider->isSliderDown())
        durationSlider->setValue(position / 1000);

    int second  = position / 1000;
    int minute = second / 60;
    second %= 60;

    QString mediaPosition;
    mediaPosition.clear();

    if (minute >= 10)
        mediaPosition = QString::number(minute, 10);
    else
        mediaPosition = "0" + QString::number(minute, 10);

    if (second >= 10)
        mediaPosition = mediaPosition
                + ":" + QString::number(second, 10);
    else
        mediaPosition = mediaPosition
                + ":0" + QString::number(second, 10);

    /* 显示现在播放的时间 */
    label[0]->setText(mediaPosition);
}

void VideoPlayer::durationSliderReleased()
{
    /* 设置媒体播放的位置 */
    videoPlayer->setPosition(durationSlider->value() * 1000);
}

void VideoPlayer::volumeSliderReleased()
{
    /* 设置音量 */
    videoPlayer->setVolume(volumeSlider->value());
}

void VideoPlayer::scanVideoFiles()
{
    QDir dir(QCoreApplication::applicationDirPath()
             + "/myVideo");
    QDir dirbsolutePath(dir.absolutePath());
    /* 如果目录存在 */
    if (dirbsolutePath.exists()) {
        /* 定义过滤器 */
        QStringList filter;
        /* 包含所有xx后缀的文件 */
        filter << "*.mp4" << "*.mkv" << "*.wmv" << "*.avi";
        /* 获取该目录下的所有文件 */
        QFileInfoList files =
                dirbsolutePath.entryInfoList(filter, QDir::Files);
        /* 遍历 */
        for (int i = 0; i < files.count(); i++) {
            MediaObjectInfor info;
            /* 使用utf-8编码 */
            info.fileName = QString::fromUtf8(files.at(i)
                                              .fileName()
                                              .toUtf8()
                                              .data());
            info.filePath = QString::fromUtf8(files.at(i)
                                              .filePath()
                                              .toUtf8()
                                              .data());
            /* 媒体列表添加视频 */
            if (mediaPlaylist->addMedia(
                        QUrl::fromLocalFile(info.filePath))) {
                /* 添加到容器数组里储存 */
                MediaObjectInfo.append(info);
                /* 添加视频名字至列表 */
                listWidget->addItem(info.fileName);
            } else {
                qDebug()<<
                           mediaPlaylist->errorString()
                           .toUtf8().data()
                        << endl;
                qDebug()<< "  Error number:"
                        << mediaPlaylist->error()
                        << endl;
            }
        }
    }
}
