// Include the Servo library
#include <Wire.h>
#include <Adafruit_MotorShield.h>
// Declare the Servo pin
Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(2);

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

}
 void loop(){
 myMotor->setSpeed(200);
 myMotor2->setSpeed(200);
 myMotor->run(FORWARD);
 myMotor2->run(FORWARD);

 delay(200);

 myMotor2->run(RELEASE);

 delay(2000);

 myMotor2->run(FORWARD);

 //delay(500);
 
 myMotor->run(RELEASE);

 delay(2000);

 myMotor2->run(RELEASE);

 delay(5000000000000);
}


