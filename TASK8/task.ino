// C++ code
//
#include <Servo.h>
Servo s1;
Servo s2;
const int sPin1=6;
const int sPin2=3;
const int pot=A5;
void setup()
{
  s1.attach(sPin1);
  s2.attach(sPin2);
  
}

void loop()
{
  int v=analogRead(pot);
  s1.write(map(v,0,1023,0,180));
  s2.write(map(v,0,1023,180,0));
}