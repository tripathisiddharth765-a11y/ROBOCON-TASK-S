#include <Servo.h>
#include <LiquidCrystal_I2C.h>
//0x27
LiquidCrystal_I2C lcd(0x20,16,2);
Servo s1;
const int pot=A1;
const int sPin=3;
void setup() {
s1.attach(sPin);
lcd.init();
lcd.backlight();
}

void loop() {
int v=analogRead(pot);
float angle=map(v,0,1023,0,180);
s1.write(angle);
lcd.setCursor(0,0);
lcd.print(angle);
delay(500);
lcd.clear();  
}
