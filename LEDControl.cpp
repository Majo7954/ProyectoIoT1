#include "LEDControl.h"

LEDControl::LEDControl(int redPin, int yellowPin, int greenPin) 
    : _redPin(redPin), _yellowPin(yellowPin), _greenPin(greenPin) {
    pinMode(_redPin, OUTPUT);
    pinMode(_yellowPin, OUTPUT);
    pinMode(_greenPin, OUTPUT);
}

void LEDControl::blinkRed(int varDelay) {
    digitalWrite(_redPin, HIGH);
    delay(varDelay);
    digitalWrite(_redPin, LOW);
}

void LEDControl::blinkYellow(int varDelay) {
    digitalWrite(_yellowPin, HIGH);
    delay(varDelay);
    digitalWrite(_yellowPin, LOW);
}

void LEDControl::blinkGreen(int varDelay) {
    digitalWrite(_greenPin, HIGH);
    delay(varDelay);
    digitalWrite(_greenPin, LOW);
}

void LEDControl::setRed(bool state) {
    digitalWrite(_redPin, state);
}

void LEDControl::setYellow(bool state) {
    digitalWrite(_yellowPin, state);
}

void LEDControl::setGreen(bool state) {
    digitalWrite(_greenPin, state);
}

void LEDControl::setAll(bool state) {
    setRed(state);
    setYellow(state);
    setGreen(state);
}
