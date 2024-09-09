#include <Motor.hh>

void Motor::setSpeed(int speed) {

    _speed = constrain(speed, 0, 255);
    applyState();

}

void Motor::setDirection(bool forward) {

    _direction = forward;
    applyState();

}

void Motor::stop() {

    setSpeed(0);
    applyState();
    
}

void Motor::applyState() {

    if (_speed == 0) {
        digitalWrite(_dirPin1, LOW);
        digitalWrite(_dirPin2, LOW);
    } else if (_direction) {
        analogWrite(_dirPin1, _speed);
        digitalWrite(_dirPin2, LOW);
    } else {
        digitalWrite(_dirPin1, LOW);
        analogWrite(_dirPin2, _speed);
    }

}