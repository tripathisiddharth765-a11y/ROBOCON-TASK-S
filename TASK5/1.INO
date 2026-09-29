// C++ code
//
const int pot=A5;
const int rled=7;
const int yled=4;
const int gled=2;

void setup()
{
  pinMode(rled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(gled, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int potValue=analogRead(pot);
  if(potValue>=0&&potValue<=340){
  	digitalWrite(rled,LOW);
    digitalWrite(yled,LOW);
    int brightness=map(potValue,0,340,0,255);
    analogWrite(gled,brightness);
    Serial.print("Potentiometer : ");
    Serial.println(potValue);
    delay(1000);
    Serial.println("lED STATE : Green led on! \n");
    delay(1000);
    
  }
  else if(potValue>=341&&potValue<=680){
  	digitalWrite(gled,LOW);
    digitalWrite(rled,LOW);
    int brightness=map(potValue,341,680,0,255);
    analogWrite(yled,brightness);
    Serial.print("Potentiometer : ");
    Serial.println(potValue);
    Serial.print("lED STATE : Yellow led on! \n");
  }
  
  if(potValue>=681&&potValue<=1023){
  	digitalWrite(rled,LOW);
    digitalWrite(gled,LOW);
    
    int brightness=map(potValue,681,1023,0,255);
    analogWrite(rled,brightness);
    Serial.print("Potentiometer : ");
    Serial.println(potValue);
    Serial.print("lED STATE : Red led on! \n");
  }
  
}