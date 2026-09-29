// C++ code
//
const int led1=10;
const int led2=5;
const int sw1=3;
const int sw2=2;
const int pot=A4;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
}

void loop()
{
  bool s1=digitalRead(sw1);
  bool s2=digitalRead(sw2);
  int analog=analogRead(pot);
  float V1=analog/4;
  
  if(s1==HIGH&&s2==LOW){
  	analogWrite(led1,V1);
 	digitalWrite(led2,LOW);
  }
  else if(s2==HIGH&s1==LOW){
  digitalWrite(led1,LOW);
  analogWrite(led2,V1);
  }
  
  else if(s1==HIGH &&s2==HIGH){
  analogWrite(led1,V1);
  analogWrite(led2,V1);
  }
  
  else{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  }
  
}