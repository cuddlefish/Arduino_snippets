#include <Servo.h>

Servo robot_servo;
int potpin = 0;
int val;

void setup()
{
  Serial.begin(9600);
  robot_servo.attach(9);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 179);
  robot_servo.write(val);
  delay(15);
}

