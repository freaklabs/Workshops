int buttonPin = 7;
int ledPin = 8;
int oldVal = 1;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;
  val = digitalRead(buttonPin);
  if (val != oldVal)
  {
    if (val == 0)
    {
      digitalWrite(ledPin, HIGH);
    }
    else
    {
      digitalWrite(ledPin, LOW);
    }
    
    Serial.println("Button changed.");
    oldVal = val;
  }
}
