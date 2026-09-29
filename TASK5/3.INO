// C++ code
//
const int led=6;
const int pot=A4;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  int potValue=analogRead(pot);
  float V1=potValue/4;
  analogWrite(led,V1);
}