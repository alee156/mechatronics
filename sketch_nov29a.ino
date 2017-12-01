// Include the Servo library

#include <Wire.h>

#include <Adafruit_MotorShield.h>

#include <Servo.h>

// Declare the Servo pin

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(2);

int servoPin = 3;



// Create a servo object



Servo Servo1;



void setup() {

 Serial.begin(9600);           // set up Serial library at 9600 bps

 AFMS.begin();

 // We need to attach the servo to the used pin number

 myMotor->setSpeed(50);

 myMotor->run(FORWARD);
 
 myMotor2->setSpeed(50);

 myMotor2-> run(FORWARD);

 // turn on motor

 myMotor->run(RELEASE);

 myMotor2->run(RELEASE);

 Servo1.attach(servoPin);

}



void loop(){

 myMotor->run(BACKWARD);

 myMotor->setSpeed(255);

 myMotor2->run(FORWARD);

 myMotor2->setSpeed(255);


}
