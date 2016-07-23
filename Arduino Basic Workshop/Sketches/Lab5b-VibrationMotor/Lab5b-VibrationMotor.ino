int led = 9;           
int speed = 0;   
int speedChange = 5;    

void setup()  { 
  pinMode(led, OUTPUT);
} 

void loop()  { 
  analogWrite(led, speed);    
  speed = speed + speedChange;

  if (speed == 0 || speed == 255) {
    speedChange = -speedChange ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

