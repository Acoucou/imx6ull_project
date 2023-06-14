QT       += core gui network multimedia multimediawidgets charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwidget.cpp

HEADERS += \
    mainwidget.h

FORMS += \
    mainwidget.ui


 x86
INCLUDEPATH += /home/coucou/linux/opencv-3.4.1/x86_opencv/include
LIBS += /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_core.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_highgui.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_imgproc.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_videoio.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_imgcodecs.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_core.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_calib3d.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_features2d.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_video.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_ml.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_objdetect.so \
 /home/coucou/linux/opencv-3.4.1/x86_opencv/lib/libopencv_flann.so \

# arm
#TARGET_ARCH = $${QT_ARCH}
#contains(TARGET_ARCH, arm){
#INCLUDEPATH += /home/coucou/linux/opencv-3.4.1/install/include

#LIBS += /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_core.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_highgui.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_imgproc.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_videoio.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_imgcodecs.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_calib3d.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_features2d.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_video.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_ml.so \
## /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_objdetect.so \
# /home/coucou/linux/opencv-3.4.1/install/lib/libopencv_flann.so \
 


#}else{
#LIBS += -L/usr/lib \
#     -lopencv_core \
#     -lopencv_highgui \
#     -lopencv_imgproc \
#     -lopencv_videoio \
#     -lopencv_imgcodecs \
#     -lopencv_calib3d \
#     -lopencv_features2d \
#     -lopencv_video \
#     -lopencv_ml \
##     -lopencv_objdetect \
#     -lopencv_flann

# INCLUDEPATH += /usr/include
#}


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

include(./form/form.pri)
include(./hardware/hardware.pri)

INCLUDEPATH += $$PWD/hardware
INCLUDEPATH += $$PWD/form
