int buttonPin = 7;
int motorPin = 8;
int oldVal = 1;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;
  val = digitalRead(buttonPin);
  if (val != oldVal)
  {
    if (val == 0)
    {
      digitalWrite(buttonPin, HIGH);
    }
    else
    {
      digitalWrite(buttonPin, LOW);
    }
    
    Serial.println("Button changed.");
    oldVal = val;
  }
}
