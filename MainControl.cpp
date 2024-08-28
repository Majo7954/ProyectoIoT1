#include "MainControl.h"

MainControl::MainControl(LEDControl& ledControl, UltrasonicSensor& ultrasonicSensor) 
    : _ledControl(ledControl), _ultrasonicSensor(ultrasonicSensor), _previousMillis(0), _ledState(LOW) {}

void MainControl::update() {
    unsigned long currentMillis = millis();
    float cm = _ultrasonicSensor.getDistanceCM();
    
    Serial.print(cm);
    Serial.println(" cm");

    if (cm < 10) {
        _ledControl.blinkRed(100);
        _ledControl.setYellow(LOW);
        _ledControl.setGreen(LOW);
    } else if (cm < 20) {
        _ledControl.setRed(LOW);
        _ledControl.blinkYellow(500);
        _ledControl.setGreen(LOW);
    } else if (cm < 30) {
        _ledControl.setRed(LOW);
        _ledControl.setYellow(LOW);
        _ledControl.blinkGreen(1000);
    } else {
        if (currentMillis - _previousMillis >= _interval) {
            _previousMillis = currentMillis;
            _ledState = (_ledState == LOW) ? HIGH : LOW;
            _ledControl.setAll(_ledState);
        }
    }
    delay(100);
}
