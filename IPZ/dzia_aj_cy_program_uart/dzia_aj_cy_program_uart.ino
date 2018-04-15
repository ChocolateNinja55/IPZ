String readString;
#include <Servo.h>
Servo serwomechanizm;

char znak =0;
char c_liczba =10;
boolean zm = false;

void setup(){
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
  nawiazkom();
  serwomechanizm.attach(11);
  //serwomechanizm.write(0);
}
void loop(){
  if(Serial.available()>0){
    znak = Serial.read();
    delay(2);
 }
  switch(znak){
  case 'A':
    Serial.print("Elo elo\n");
    delay(500);
    serwomechanizm.write(45);
    delay(500);
    znak = 0;
  break;
  
  case 'B':
    Serial.print("no dziala\n");
    delay(500);
    digitalWrite(8, HIGH);
    znak = 0;
    break;
    
  case 'C':
  Serial.print("Jakas liczba:11\n");
  digitalWrite(8,LOW);
  delay(500);
  znak = 0;
  break;
  
  case 'D':
  Serial.print("JP\n");
  znak = 0;
  delay(500);
  while(Serial.available()){
    delay(2000);
    c_liczba = Serial.read();
    readString += c_liczba;
    delay(2);
  }
  if (readString.length() >0) {
    Serial.println(readString);
    int i_liczba = readString.toInt();
    serwomechanizm.write(i_liczba);
  delay(500);
  readString ="";
  break;
  }
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
