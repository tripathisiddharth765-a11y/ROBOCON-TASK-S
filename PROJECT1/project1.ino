#include <LiquidCrystal_I2C.h> 
//Header file for lcd display
LiquidCrystal_I2C lcd(0x20,16,2);//making a lcd object
#define tSen A3
#define en1 3
#define in1 7
#define in2 4
float temperature;
float Voltage;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(en1,OUTPUT);
  lcd.backlight();
  lcd.init();
  Serial.begin(9600);
}

void loop()
{
  int reading=analogRead(tSen);//rading analog signal
  Voltage=reading*(5.0/1024.0);//converting the readings into an 
  //accetable voltage
  temperature=(Voltage-0.5)*100;//now converting it into celcius
  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(en1,map(temperature,-40,125,0,255));//writing motor speed for 
  // the temperature
  lcd.setCursor(0,0);
  lcd.print(temperature);
  lcd.print(".c");
  delay(1000);
  lcd.clear();
}