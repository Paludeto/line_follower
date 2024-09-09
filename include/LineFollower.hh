#ifndef LINEFOLLOWER_HH
#define LINEFOLLOWER_HH

#include <Motor.hh>
#include <QTRSensors.h>

#define SENSOR_NUM 8

class LineFollower {
public: 

    LineFollower(Motor &rightMotor, Motor &leftMotor) : _rightMotor {rightMotor}, _leftMotor {leftMotor} 
    {

    };

    void init(const uint8_t sensorPins[], const int emmiterPin);
    void calibrationRoutine();
    void pidControl();
    void followLine();
   
private:

    uint16_t _sensorArray[SENSOR_NUM];
    Motor &_rightMotor, &_leftMotor;
    QTRSensors _qtrSensor;

    float _kP{0.0f}, _kI{0.0f}, _kD{0.0f};      // PID coefficients with default values
    int _lastError{0};                          // Last error value with default value
    int _baseSpeed{0};                          // Base speed for the motors with default value
    int _maxSpeed{255};                         // Maximum speed for the motors with default value

};

#endif //LINEFOLLOWER_HH