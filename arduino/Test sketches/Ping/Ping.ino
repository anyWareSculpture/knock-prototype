void setup()
{
  Serial.begin(9600);
  Serial.println("Hello Ping");
}


void loop()
{ 
  pinMode(2, OUTPUT);
  digitalWrite(2, 1); //send a pulse to the PING
  delayMicroseconds(2);
  digitalWrite(2, 0);
  pinMode(2, INPUT);

  unsigned long duration = pulseIn(2, HIGH);
  
  int distance;
  distance = 172 * duration / 1000;
   
  Serial.println (distance);
  delay (500);
}

