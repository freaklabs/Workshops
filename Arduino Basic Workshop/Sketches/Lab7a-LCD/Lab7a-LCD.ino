#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.begin();
  lcd.backlight();
  lcd.print("Hello world");
}

void loop(){
  for (int i=0; i<100; i++)
  {
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Counting: ");
    lcd.print(i);

    lcd.setCursor(0, 1);
    lcd.print("Backwards: ");
    lcd.print(100-i);
  }
}
