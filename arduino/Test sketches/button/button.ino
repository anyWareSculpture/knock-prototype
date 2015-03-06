 // One line comment
 
 /* 
 two line 
 comment
 */
 
 //in void setup - we want to configure the arduino for the first time.  
 //Anything that is done once ie: configure pins - set up serial - setup 
 //some start up indicators - like LEDs flashing.
  
void setup () { 
  
  pinMode(3, INPUT); //set pin 2 as input
  
  Serial.begin(9600);  //this is for setting a speed for the serial port (for sending and receive info)
  Serial.println("Hello button");
  
}

void loop () {
  
  bool offon = digitalRead(3); //sets the pin to read
 
  Serial.println(offon); // This prints the switch value to the serial port  
}
