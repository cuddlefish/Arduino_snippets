//robot_servo_light-sensor
//shading the light sensor makes the robot turn its head

#include <Servo.h>

Servo robotServo;
int servoPin = 9;
int servoVal;
int lightsensorPin = 0;
int lightValue;


void setup(){
  Serial.begin(9600);
  robotServo.attach(servoPin);
}

void loop(){
//The light-sensor is around 150 in normal indoor light; 
//at 5 directly under bulb, 600 totally obscured
  lightValue = analogRead(lightsensorPin);
  servoVal = map(lightValue, 10, 500, 0, 179);
  Serial.println(lightValue);
  Serial.println(servoVal);
  robotServo.write(servoVal);
  delay(15);
}

