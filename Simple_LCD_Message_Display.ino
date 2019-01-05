#include <LiquidCrystal.h> // LCD Library 
LiquidCrystal lcd(9,8,10,11,12,13); // Pins Locations

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);     // Begin lcd first ,Size is 16*2
  // Print a message to the LCD.
  lcd.print("LCD Display!");  //Display this message on LCD
}

void loop() {
  // set the Cursor to Line#1,Column#0
  // (NOTE: Line# 1 is the Second Row, Since Counting begins with 0):
  lcd.setCursor(0, 1);
  // Print the number of seconds since Reset:
  lcd.print(millis() / 1000);
    delay(1000);// 1000 milli seconds 
}
