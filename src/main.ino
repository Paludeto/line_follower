#include <QTRSensors.h>
#include <Arduino.h>
#include <LineFollower.hh>

const uint8_t sensorPins[] = {A0, A1, A2, A3, A4, A5, A6, A7};
const uint8_t emitterPin = 12;

Motor rightMotor(5, 6), leftMotor(9, 10);
LineFollower lineFollower(rightMotor, leftMotor);

void setup() {

  //lineFollower.init(sensorPins, emitterPin);
  //lineFollower.calibrationRoutine();

}

void loop() {

  //lineFollower.followLine();
  rightMotor.setSpeed(100);
  rightMotor.setDirection(true);
  leftMotor.setSpeed(90);  
  leftMotor.setDirection(true);
  
}
