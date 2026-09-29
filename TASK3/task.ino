int pin1 = 12;   
int pin2 = 8;    
int pin3 = 7;    
int pin4 = 4;    

void setup()
{
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    int decimal = Serial.parseInt();

    if(decimal >= 0 && decimal <= 15){
        int binary[4];
	    for(int i = 3; i >= 0; i--){
            binary[i] = decimal % 2;
            decimal = decimal / 2;
        }

        int size = 0;

        while(size < 4){
            if(size == 0){
                digitalWrite(pin1, binary[size]);
            }
            else if(size == 1){
                digitalWrite(pin2, binary[size]);
            }
            else if(size == 2){
                digitalWrite(pin3, binary[size]);
            }
            else if(size == 3){
                digitalWrite(pin4, binary[size]);
            }

            size++;
        }

        delay(1000);

        digitalWrite(pin1, LOW);
        digitalWrite(pin2, LOW);
        digitalWrite(pin3, LOW);
        digitalWrite(pin4, LOW);
        delay(1000);
    }
}