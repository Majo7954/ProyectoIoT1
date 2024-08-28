#include <Arduino.h>
#include "LEDControl.h"
#include "UltrasonicSensor.h"
#include "MainControl.h"

LEDControl ledControl(5, 18, 19);
UltrasonicSensor ultrasonicSensor(2, 4);
MainControl mainControl(ledControl, ultrasonicSensor);

void setup() {
    Serial.begin(115200);
}

void loop() {
    mainControl.update();
}
