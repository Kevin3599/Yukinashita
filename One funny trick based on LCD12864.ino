#include <RSCG12864B.h>
const int busyPin = 7;
 
RAYLIDLCD myLCD(busyPin);
 
void setup() {
  // put your setup code here, to run once:
  myLCD.begin();
  myLCD.setBrightness(255);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i;
   char chn[]={char(0xBB),char(0xB6),char(0xD3),char(0xAD),char(0xBC),char(0xD3),char(0xD4),char(0xD8), char(0xD0),char(0xE9), char(0xC4),char(0xE2),char(0xCA),char(0xC0),char(0xBD),char(0xE7),0,};
   char f1[]={char(0xCF),char(0xB5),char(0xCD),char(0xB3),char(0xD5),char(0xFD),char(0xD4),char(0xDA),char(0xB3),char(0xF5),char(0xCA),char(0xBC),char(0xBB),char(0xAF),0,};
   char f2[]={char(0xCE),char(0xB4),char(0xC0),char(0xB4),char(0xCA),char(0xC0),char(0xBD),char(0xE7),char(0xD5),char(0xFD),char(0xD4),char(0xDA),char(0xBC),char(0xD3),char(0xD4),char(0xD8),0,};
  myLCD.displayBMP(0);
  delay(800);
  myLCD.displayBMP(1);
  delay(800);
  myLCD.displayBMP(2);
  delay(800);
  myLCD.displayBMP(3);
  delay(800);
  myLCD.displayBMP(4);
  delay(800);
  myLCD.displayBMP(5);
  delay(800);
  myLCD.clear();
  myLCD.print(20, 15, chn, LARGE);
  myLCD.print(40, 35, "Welcome!", LARGE);
  delay(5000);
  myLCD.clear();
  myLCD.print(16, 15, chn, LARGE);
  myLCD.print(20, 35, "Welcome!Geek Boy", LARGE);
  delay(5000);
  myLCD.clear();
  myLCD.fontReversOn();
  myLCD.print(45, 0, "Login", LARGE);
  myLCD.fontReversOff();
  myLCD.print(36, 22, "User Name:", SMALL);
  myLCD.print(36, 32, "Password:", SMALL);
  myLCD.print(15, 50, "Virtual reality.co", SMALL);
  myLCD.print(5, 48, "", SMALL);
  delay(3000);
  myLCD.clear();
  myLCD.print(0, 0, f1, LARGE);
  myLCD.print(0, 16, f2, LARGE);
  myLCD.print(0, 40,"System loading...",LARGE);
  myLCD.drawRect(0, 50, 127, 63);
  for (i = 2; i <= 125; i++)
  {
    myLCD.drawRectF(2, 52, i, 61);
    delay(1000);
  }
  delay(1000);
}