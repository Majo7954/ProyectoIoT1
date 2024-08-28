#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include "LEDControl.h"
#include "UltrasonicSensor.h"

class MainControl {
public:
    MainControl(LEDControl& ledControl, UltrasonicSensor& ultrasonicSensor);
    void update();

private:
    LEDControl& _ledControl;
    UltrasonicSensor& _ultrasonicSensor;
    unsigned long _previousMillis;
    const long _interval = 500;
    int _ledState;
};

#endif
