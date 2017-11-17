// Include the Servo library
#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"
#include <Servo.h>

// Declare the Servo pin
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
int servoPin = 3;

// Create a servo object

Servo Servo1;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  AFMS.begin();
  // We need to attach the servo to the used pin number
  myMotor->setSpeed(50);
  myMotor->run(FORWARD);
  // turn on motor
  myMotor->run(RELEASE);

  Servo1.attach(servoPin);

}

void loop(){
  myMotor->run(FORWARD);
  myMotor->setSpeed(50);
  // Long long long
/*
  Servo1.write(0);

  delay(1000);

  Servo1.write(40);

  delay(500);

  Servo1.write(-40);

  delay(1000);

  Servo1.write(40);

  delay(500);

  Servo1.write(-40);

  delay(1000);

   Servo1.write(40);

  delay(500);

  Servo1.write(-40);

  delay(1000);

*/  


  Servo1.write(0);
  delay(3000);

  // Short short short

  Servo1.write(40);

  delay(200);

  Servo1.write(-40);

  delay(200);

  Servo1.write(40);

  delay(200);

  Servo1.write(-40);

  delay(200);

  Servo1.write(40);

  delay(200);

  Servo1.write(-40);

  delay(1000);



  // Long long long

  Servo1.write(40);

  delay(1000);

  Servo1.write(-40);

  delay(1000);

  Servo1.write(40);

  delay(1000);

  Servo1.write(-40);

  delay(1000);

  Servo1.write(40);

  delay(1000);

  Servo1.write(-40);

  delay(1000);
  

  // Short short short

  Servo1.write(40);

  delay(200);

  Servo1.write(-40);

  delay(200);

  Servo1.write(40);

  delay(200);

  Servo1.write(-40);

  delay(200);

  Servo1.write(40);

  delay(200);

  Servo1.write(-40);

 ///////
  delay(2000);


}
