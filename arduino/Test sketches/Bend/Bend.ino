
//Flex Sensor Pin (flexPin)
//the analog pin the Flex Sensor is connected to
int flexPin = 0;  
                  
void setup () { 
  
  Serial.begin(9600);  //this is for setting a speed for the serial port (for sending and receive info)
  Serial.println("Hello Bend");
  
}

void loop(){
 
  int bend = analogRead(flexPin); //declared a variable called bend - the type is int (which allows for 64000 numbers

 Serial.println(bend); // This prints the pir value to the serial port
  
}
