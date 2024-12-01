#ifndef stepper_moto_h
#define stepper_moto_h

#include <Arduino.h>

class stp_moto{
public:
    stp_moto(int STEP, int DIR, int speed);

    void move(int degree = 0); 

private:
    int _STEP;
    int _DIR;
};
#endif
