
// Include the Servo library

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"
#include <Servo.h>

// Declare the Servo pin
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(2);
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
int servoPin = 3;


Servo Servo1;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  AFMS.begin();
  myMotor->setSpeed(90);
  myMotor->run(FORWARD);
  myMotor->run(RELEASE);
  
  myMotor2->setSpeed(75);
  myMotor2-> run(FORWARD);
  myMotor2->run(RELEASE);

  Servo1.attach(servoPin);

}

void loop(){
  
  myMotor->setSpeed(100);
  myMotor2->setSpeed(90);
  myMotor->run(BACKWARD);
  myMotor2->run(BACKWARD);
  //Servo1.write(300);
  delay(100);

  Servo1.write(140);

  delay(200);

  Servo1.write(160);

  delay(200);

  Servo1.write(140);

  delay(200);

  Servo1.write(160);

  delay(200);

  Servo1.write(140);

  delay(200);

  Servo1.write(160);


  /////////////////////////////
  delay(200);
  Servo1.write(140);

  delay(200);



  // Long long long

  Servo1.write(140);

  delay(1000);

  Servo1.write(160);

  delay(1500);

  Servo1.write(140);

  delay(1000);

  Servo1.write(160);

  delay(1500);

  Servo1.write(140);

  delay(1000);

  Servo1.write(160);

  delay(1500);
  

  // Short short short

  Servo1.write(140);

  delay(1000);

  Servo1.write(160);

  delay(200);

  Servo1.write(140);

  delay(200);

  Servo1.write(160);

  delay(200);

  Servo1.write(140);

  delay(200);

  Servo1.write(160);

 ///////

   /////////////////////////////
  delay(500);
  Servo1.write(140);

  //////////////////////////////

  myMotor->run(FORWARD);
  myMotor2->run(RELEASE);

  delay(2500);

  myMotor2->run(FORWARD);

  delay(5000);

  

  ////////////////////////////////
 

  myMotor2->setSpeed(0);
  myMotor ->setSpeed(0); 
  delay(20000000);

}
