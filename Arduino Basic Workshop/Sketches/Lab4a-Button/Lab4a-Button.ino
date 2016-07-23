int buttonPin = 8;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(57600);
}

void loop() {
  int val;
  val = digitalRead(buttonPin);

  if (val == 0)
  {
    Serial.println("Button is pushed.");  
  }
}
