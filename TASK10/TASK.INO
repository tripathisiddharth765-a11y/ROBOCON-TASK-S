//0x20
// C++ code
//
#include<LiquidCrystal_I2C.h>
const int en1=3;
const int in1=4;
const int in2 =7;
const int pot=A0;
LiquidCrystal_I2C lcd(0x20,16,2);
void setup()
{
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  int v=analogRead(pot);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(en1,v);
  lcd.print(v);
  delay(500);
  lcd.clear();
}