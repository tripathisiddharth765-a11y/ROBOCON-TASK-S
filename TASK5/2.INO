const int pot = A5;
const int redLED = 7;
const int yellowLED = 4;
const int greenLED = 2;
const int trigPin = 11;
const int echoPin = 10;
long duration;
float distance;
void setup(){
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  int potValue = analogRead(pot);
  int warningDistance = map(potValue, 0, 1023, 10, 50);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0343 / 2;
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  if (distance > warningDistance){
    digitalWrite(greenLED, HIGH);
    Serial.println("Status: SAFE - Green LED ON");
  }
  else if (distance > warningDistance / 2.0){
    digitalWrite(yellowLED, HIGH);
    Serial.println("Status: WARNING - Yellow LED ON");
  }
  else{
    digitalWrite(redLED, HIGH);
    Serial.println("Status: DANGER - Red LED ON");
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  Serial.print("Warning Distance: ");
  Serial.print(warningDistance);
  Serial.println(" cm \n");
  delay(500);
}