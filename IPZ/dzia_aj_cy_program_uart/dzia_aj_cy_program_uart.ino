#include <Servo.h>
Servo serwomechanizm;
String ciag;
char znak =0;
boolean zm = false;
int i =10;

void setup(){
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
  nawiazkom();
  serwomechanizm.attach(11);
}
void loop(){
  if(Serial.available()>0){
    znak = Serial.read();
    //ciag +=znak;
 }
  switch(znak){
  case 'A':
    Serial.print("Elo elo\n");
    delay(500);
    serwomechanizm.write(45);
    delay(500);
    //serwomechanizm.write(45);
    //serwomechanizm.write(-45);
    znak = 0;
  break;
  
  case 'B':
    Serial.print("no dziala\n");
    delay(500);
    znak = 0;
    break;
    
  case 'C':
  Serial.print("Jakas liczba: ");
  Serial.println(i);
  delay(500);
  znak = 0;
  break;
  }
  nawiazkom();
}
void nawiazkom(){
  while(Serial.available()<=0){
    Serial.print("Siemandero\n");
    delay(250);
  }
}
