#include <DHT.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

int dhtPin = 2;

DHT dht(dhtPin, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  dht.begin();
}

void loop() {
  delay(1000);

  int h = dht.readHumidity();
  int t = dht.readTemperature();

  lcd.clear(); 
  lcd.home();
  lcd.print("Humidity: "); lcd.print(h); lcd.print("%");
  
  lcd.setCursor(0, 1);
  lcd.print("Temp: "); lcd.print(t); lcd.print("\337C");
}
