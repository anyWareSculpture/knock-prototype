        
void setup () { 
  
  Serial.begin(9600);  //this is for setting a speed for the serial port (for sending and receive info)
  Serial.println("Hello piezo");
  
}

void loop(){
 
  int piezo = analogRead(1); //declared a variable called piezo - the type is int (which allows for 64000 numbers
//  if (piezo != 438 && piezo != 439 && piezo != 440) { //if the piezo != (not equal) 438  and 439 and 440 - then print
//    Serial.println(piezo); // This prints the piezo value to the serial port
//  }

  // > 450 => light tap
  // > 650 => knock
  
  if (piezo > 445) Serial.println(piezo);
  if (piezo > 550) {  
    Serial.println("Knock");
    delay(100);
  }
  //else if (piezo > 450) {
   // Serial.println("Tap");
   // delay(100); 
  //}
  
}
