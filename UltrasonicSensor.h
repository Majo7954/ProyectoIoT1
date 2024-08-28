#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

#include <Arduino.h>

class UltrasonicSensor {
public:
    UltrasonicSensor(int triggerPin, int echoPin);
    float getDistanceCM();

private:
    int _triggerPin;
    int _echoPin;
    long readUltrasonicDistance(int triggerPin, int echoPin);
};

#endif
