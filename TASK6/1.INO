// C++ code
//
const int led=7;
const int trig=5;
const int echo=3;
int duration;
float distance;

float custom_map(float distance,int from_range,int to_range){
		return (distance/from_range)*to_range;
}

void setup()
{
  pinMode(echo,INPUT);
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
}

void loop()
{
  digitalWrite(led,LOW); 
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  
  
  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  
  if(distance<20&&distance>200){
  digitalWrite(led,LOW);
  }
  
  else{
  float V=custom_map(distance,200,255);
  analogWrite(led,V);
  }
  
  
}