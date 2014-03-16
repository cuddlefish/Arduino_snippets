##Arduino Snippets

Snippets for various projects:

####robot_servo_light_sensor
a 180-degree servo motor pivots the head of a paper robot. Looking for inputs to cause its head to turn:

####before/currently:
- started with potentiometer, but that was too obvious
- currently using a photoresistor (crudely): _when you shadow the photoresistor it turns one way; when you shine extra light it turns the other way_

####v1.0 goal: 
- if you press a button or shadow the photoresistor, the robot looks around slowly, then returns to its original position.
or/and:
- randomly moves a bit every few minutes

####v2.0+
- arms move too, all off the same servo (requires internal strings/wiring in the robot)