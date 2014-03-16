int lightsensorPin = 0;
int value;

void setup(){
  Serial.begin(9600);
}

void loop(){
  value = analogRead(lightsensorPin);
  Serial.println(value);
  delay(100);
}


