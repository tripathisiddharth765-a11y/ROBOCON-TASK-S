// C++ code
//
const int trig=12;
const int echo=8;
const int pot=5;
const int en1=6;
const int in1=2;
const int in2=7;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  int v=analogRead(pot);
  int duration=pulseIn(echo,HIGH);
  int distance=duration*0.034/2;
  
  if(distance<=100){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(en1,map(distance,0,100,0,255));
  }
  else{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  analogWrite(en1,map(v,0,1023,0,255));
  }
  
}