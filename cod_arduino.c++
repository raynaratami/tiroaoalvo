#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
#define motor1 13
#define motor2 12
#define motor3 11
#define b1   9
#define alvo1 8
#define alvo2 7
#define alvo3 6
#define led1 3
#define led2 4
#define led3 5
#define buzzer 10

void setup()
{
  servo1.attach(motor1);
  servo2.attach(motor2);
  servo3.attach(motor3);
  Serial.begin(9600);   
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(b1, INPUT_PULLUP);
  pinMode(alvo1, INPUT_PULLUP);
  pinMode(alvo2, INPUT_PULLUP);
  pinMode(alvo3, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  if(digitalRead(b1) == LOW)
  {    
   	digitalWrite(buzzer,HIGH);
  	servo1.write(100);
  	servo2.write(100);
  	servo3.write(100);   
   	delay(800);
   	digitalWrite(buzzer,LOW);
   	servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    digitalWrite(led1,LOW);
   	digitalWrite(led2,LOW);
   	digitalWrite(led3,LOW);
  }
  if(digitalRead(alvo1) == LOW)
  {
   	digitalWrite(led1,HIGH);
  }
  if(digitalRead(alvo2) == LOW)
  {
   	digitalWrite(led2,HIGH);
  }
  if(digitalRead(alvo3) == LOW)
  {
   	digitalWrite(led3,HIGH);
  }
  //delay(200);
}
