//robot_servo_light-sensor
//shading the light sensor makes the robot turn its head

#include <Servo.h>

Servo robotServo;
int servoPin = 9;
int servoVal;
int lightsensorPin = 0;
int lightValue;

const int numReadings = 10;
int readings[numReadings];
int index = 0;
int total = 0;
int rollingAverage = 0; 

void setup(){
  Serial.begin(9600);
  robotServo.attach(servoPin);

  for (int thisReading = 0; thisReading < numReadings; thisReading++)
    readings[thisReading] = 0; 
}

void loop(){

  total = total - readings[index];         
  readings[index] = analogRead(lightsensorPin); 
  total = total + readings[index];       
  index = index + 1;                    

  if (index >= numReadings)              
    index = 0;                           
  rollingAverage = total / numReadings;          
  delay(10); 

  //The light-sensor is around 150 in normal indoor light; 
  //at 5 directly under bulb, 600 totally obscured
  servoVal = map(rollingAverage, 10, 500, 0, 179);
  robotServo.write(servoVal);
}

