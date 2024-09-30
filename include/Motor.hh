#ifndef MOTOR_HH
#define MOTOR_HH

#include <Arduino.h>

class Motor {
public:

    // Constructor
    Motor(int dirPin1, int dirPin2) :
        _dirPin1 {dirPin1}, _dirPin2 {dirPin2}, _speed {0}

    {
        stop();
    }

    // Sets up pins (to be called inside of setup)
    void init() {
        pinMode(_dirPin1, OUTPUT);
        pinMode(_dirPin2, OUTPUT);
    }

    // Set the speed of the motor (0-255)
    void setSpeed(int speed);

    int getSpeed();

    // Set the direction of the motor
    void setDirection(bool forward);

    // Stop the motor
    void stop();

private:
    int _dirPin1;   // Direction control pin 1
    int _dirPin2;   // Direction control pin 2
    int _speed;     // Current speed
    bool _direction;  // Current direction

    // Apply the current speed and direction
    void applyState();
};

#endif // MOTOR_HH