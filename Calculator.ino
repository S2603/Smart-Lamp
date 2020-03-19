#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);  // sets the interfacing pins

signed short minutes, secondes;
char timeline[16];

void setup() {

  lcd.begin(16, 2);
  lcd.print("Timer :-");


}

void loop() {

  lcd.setCursor(0, 1);
  sprintf(timeline,"%0.2d mins %0.2d secs", minutes, secondes);
  lcd.print(timeline);
 
  delay(1000);
  secondes++;
 
  if (secondes == 60)
  {
    secondes = 0;
    minutes ++;
  }

}
