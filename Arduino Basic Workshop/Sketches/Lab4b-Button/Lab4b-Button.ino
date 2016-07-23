int buttonPin = 7;
int oldVal = 1;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int val;
  val = digitalRead(buttonPin);
  if (val != oldVal)
  {
    Serial.println("Button changed.");
    oldVal = val;
  }
}
