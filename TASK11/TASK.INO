  #include <LiquidCrystal_I2C.h>
  const int dir=10;
  const int step=11;
  LiquidCrystal_I2C lcd(0x27,16,2);
  void setup() {
    // put your setup code here, to run once:
    pinMode(dir,OUTPUT);
    pinMode(step,OUTPUT);
    lcd.init();
    lcd.backlight();
  }

  void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(dir,HIGH);
    for(int i=0;i<200;i++){
      digitalWrite(step, HIGH);
      delay(10);
      digitalWrite(step, LOW);
      delay(10);
      lcd.setCursor(0,0);
      lcd.print("Step : ");
      lcd.setCursor(0,1);
      lcd.println(i+1);
      delay(500);
      lcd.clear();
      }

  }
