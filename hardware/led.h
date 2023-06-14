#ifndef LED_H
#define LED_H

#include <QFile>

class led
{
public:
    ~led();
    bool sta;

    void setLedState();
    bool getLedState();

private:

    QFile file;
};

#endif // LED_H
