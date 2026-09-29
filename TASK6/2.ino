// C++ code
//
const int led1=6;
const int led2=5;
const int pot=A5;
float custom_map(int analog){
		return analog/4;
}
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  int analog =analogRead(pot);
  if(analog<=511){
  	digitalWrite(led1,LOW);
    analogWrite(led2,custom_map(analog));
  }
  
  else{
  	digitalWrite(led2,LOW);
    analogWrite(led1,custom_map(analog));
  }
  
  
}