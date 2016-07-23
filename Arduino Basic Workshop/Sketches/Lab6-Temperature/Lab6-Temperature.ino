void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(A0);
  float voltage = (reading/1023.0) * 5.0;
  Serial.print(voltage); 
  Serial.println(" volts");
  
  // temperature conversion
  float temperatureC = (voltage - 0.6) * 100;
  Serial.print(temperatureC); 
  Serial.println(" degrees C");
  delay(1000);
}
