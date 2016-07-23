#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.begin();
  lcd.backlight();
}

void loop(){
  lcd.clear();
  lcd.home();
  
  int reading = analogRead(A0);
  float voltage = (reading/1023.0) * 5.0;
  lcd.print("Voltage: "); 
  lcd.print(voltage);
  lcd.print("V");
  
  // temperature conversion
  float temperatureC = (voltage - 0.6) * 100;
  lcd.print("Temp: ");
  lcd.print(temperatureC); 
  Serial.println(" \337C");
  delay(1000);
}
