// C++ code
//
const int en1=3;
const int in1=2;
const int in2=4;
const int pot=A5;

void setup()
{
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop()
{
  int v=analogRead(pot);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(en1,map(v,0,1023,0,255));
}