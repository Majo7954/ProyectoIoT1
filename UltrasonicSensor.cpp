#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(int triggerPin, int echoPin) 
    : _triggerPin(triggerPin), _echoPin(echoPin) {
    pinMode(_triggerPin, OUTPUT);
    pinMode(_echoPin, INPUT);
}

long UltrasonicSensor::readUltrasonicDistance(int triggerPin, int echoPin) {
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    return pulseIn(echoPin, HIGH);
}

float UltrasonicSensor::getDistanceCM() {
    return 0.01723 * readUltrasonicDistance(_triggerPin, _echoPin);
}
