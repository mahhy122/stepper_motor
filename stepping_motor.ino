//PINの設定
const int STEP = 3;
const int DIR  = 4;

void setup() {
  pinMode(STEP,OUTPUT); 
  pinMode(DIR,OUTPUT);
}

void loop() {
  //HIGHで反時計回り
  digitalWrite(DIR,HIGH);
  
  //200で360度回転
  for(int x = 0; x < 200; x++) {
    digitalWrite(STEP,HIGH); 
    delay(2); 
    digitalWrite(STEP,LOW); 
    delay(2); 
  }
  delay(1000);
  
  //LOWで時計回り
  digitalWrite(DIR,LOW); 
  for(int x = 0; x < 400; x++) {
    digitalWrite(STEP,HIGH);
    delay(2);
    digitalWrite(STEP,LOW);
    delay(2);
  }
  delay(1000);
}
