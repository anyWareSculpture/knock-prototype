 // One line comment
 
 /* 
 two line 
 comment
 */
 
 //in void setup - we want to configure the arduino for the first time.  
 //Anything that is done once ie: configure pins - set up serial - setup 
 //some start up indicators - like LEDs flashing.
  
void setup () { 
  
  pinMode(8, OUTPUT); //set pin 2 as output
  
  Serial.begin(9600);  //this is for setting a speed for the serial port (for sending and receive info)
  Serial.println("Hello vib");
  
}

void loop () {
  
  digitalWrite(8, 1); //sets the pin to 5volts
  delay(500);
  digitalWrite(8, 0); //sets the pin to 0volts
  delay(500);
  
}
