// Sharp IR GP2Y0A41SK0F Distance Test
// http://tinkcore.com/sharp-ir-gp2y0a41-skf/

#define sensor A0 // Sharp IR GP2Y0A41SK0F (4-30cm, analog)
int highpin = 50; 

void setup() {
  Serial.begin(9600); // start the serial port
  pinMode(sensor, INPUT);
  pinMode(highpin, OUTPUT); 
}

void loop() {
  
  // 5v
  digitalWrite(highpin, HIGH); 
  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
  int distance = 13*pow(volts, -1); // worked out from datasheet graph
  delay(500); // slow down serial port  
  Serial.println(volts);   // print the distance
 
}
