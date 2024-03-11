#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 200

Stepper stepperL(STEPS, 8, 9, 10, 11);
Stepper stepperR(STEPS, 5, 4, 3, 2);

const int joyH = 3;        // L/R Parallax Thumbstick
const int joyV = 4;        // U/D Parallax Thumbstick


void setup() {
  // set the speed of the motor to 30 RPMs
  stepperL.setSpeed(40);
  stepperR.setSpeed(40);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println((analogRead(joyV) - 521)*2);
  if (((analogRead(joyV) - 521)*2) > 40) {
    stepperL.setSpeed((analogRead(joyV) - 521)*2);
    stepperL.step(1);
    stepperR.setSpeed((analogRead(joyV) - 521)*2);
    stepperR.step(1);
  }
  if (((analogRead(joyV) - 521)*2) < -40) {
    stepperL.setSpeed((analogRead(joyV) - 521)*-2);
    stepperL.step(-1);
    stepperR.setSpeed((analogRead(joyV) - 521)*-2);
    stepperR.step(-1);
  }
  if (((analogRead(joyH) - 521)*2) < -40) {
    stepperL.setSpeed((analogRead(joyH) - 521)*-2);
    stepperL.step(-1);
    stepperR.setSpeed((analogRead(joyH) - 521)*-2);
    stepperR.step(1);
  }
  if (((analogRead(joyH) - 521)*2) > 40) {
    stepperL.setSpeed((analogRead(joyH) - 521)*2);
    stepperL.step(1);
    stepperR.setSpeed((analogRead(joyH) - 521)*2);
    stepperR.step(-1);
  }
}
