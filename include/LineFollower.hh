#ifndef LINEFOLLOWER_HH
#define LINEFOLLOWER_HH

#include <Motor.hh>
#include <QTRSensors.h>

#define SENSOR_NUM 6

class LineFollower {
public: 

    LineFollower(Motor &rightMotor, Motor &leftMotor) : _rightMotor {rightMotor}, _leftMotor {leftMotor} 
    {

    };

    void init(const uint8_t sensorPins[], const int emmiterPin);

    void calibrationRoutine();

    void pidControl();

    void followLine();

    void debug();

    void calibrateMotors();
   
private:

    uint16_t _sensorArray[SENSOR_NUM];
    Motor &_rightMotor, &_leftMotor;
    QTRSensors _qtrSensor;

    float _kP{0.05f}, _kI{0.0001f}, _kD{0.5f};      // PID coefficients with default value
    int _lastError{0};                          // Last error value with default value
    int _baseSpeed{200};
    int _maxSpeed{255};                         // Maximum speed for the motors with default value
    int _P, _I, _D;

};

#endif //LINEFOLLOWER_HH