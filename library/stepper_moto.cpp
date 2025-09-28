#include <stpMoto.h>

stp_moto::stp_moto(int STEP, int DIR){
  _STEP = STEP;
  _DIR = DIR;

  pinMode(_STEP, OUTPUT);
  pinMode(_DIR, OUTPUT);
  unsigned long _time1 = 0;
  
}

void stp_moto::move(int degree){
  bool direction = LOW;
  //向きの判定
  //define direction
  
  if(degree >= 0){
    direction = LOW;
  }else{
    direction = HIGH;
    degree = -degree;
  }
  digitalWrite(_DIR, direction);
  
  //回転する角度からステップ数の計算
  //calculate the number of steps form rotation angle
  int step = degree/1.8;
  
  //実行
  //do
  for(int x = 0; x < step; x++) {
    if(millis()-_time1 >= 2) {
      digitalWrite(_STEP,HIGH);
      Serial.println(1);
    }
    if(millis()-_time1 >= 4) {
      digitalWrite(_STEP,LOW);
      Serial.println(2);
    }else{
      _time1 = millis();
    }
  }
  //delay(speed);
}