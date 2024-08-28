#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include <Arduino.h>

class LEDControl {
public:
    LEDControl(int redPin, int yellowPin, int greenPin);
    void blinkRed(int varDelay);
    void blinkYellow(int varDelay);
    void blinkGreen(int varDelay);
    void setRed(bool state);
    void setYellow(bool state);
    void setGreen(bool state);
    void setAll(bool state);

private:
    int _redPin;
    int _yellowPin;
    int _greenPin;
};

#endif
