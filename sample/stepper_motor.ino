#include <stepper_moto.h>

stp_moto stp_moto(7,8);

void setup() {  

}

void loop() {
  //180度時計回りに回転
  //rotate 180 degrees clockwise
  stp_moto.move(180);
  delay(1000);

  //180反度時計回りに回転
  //rotate 180 degrees counterclockwise
  stp_moto.move(180);
  delay(1000);

}
