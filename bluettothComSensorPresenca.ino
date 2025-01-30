#include <SoftwareSerial.h>

const int pinSensor = A0;
int readSensor;
//                RXD , TXD
SoftwareSerial Bt(7,6);
void setup() {
  // put your setup code here, to run once:
  pinMode(pinSensor, OUTPUT);
  Serial.begin(9600);
  Bt.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Bt.available()){
    readSensor = analogRead(pinSensor);
    if(readSensor > 7){
      Serial.println(readSensor);
      Bt.println("Existe algo perto do sensor");
      delay(2000);
      
    }
    
  }
  
}
