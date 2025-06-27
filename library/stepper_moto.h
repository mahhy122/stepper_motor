#ifndef stepper_moto_h
#define stepper_moto_h

#include <Arduino.h>

class stp_moto{
public:
    stp_moto(int STEP, int DIR);

    void move(int degree = 0);
    void rotation(int degree);

private:
    int _STEP;
    int _DIR;
    unsigned long lastTime;
};
#endif
