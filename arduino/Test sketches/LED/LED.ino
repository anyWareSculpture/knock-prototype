        
void setup () { 
  
  Serial.begin(9600);  //this is for setting a speed for the serial port (for sending and receive info)
  Serial.println("Hello led");
  
}

void loop(){
 digitalWrite(5, 1);
 digitalWrite(6, 1);
 digitalWrite(7, 1);
 
 delay(500);
 
 digitalWrite(5, 0);
 digitalWrite(6, 0);
 digitalWrite(7, 0);
 
 delay(500);
}
  

