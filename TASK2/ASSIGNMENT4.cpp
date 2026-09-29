#include<iostream>
using namespace std;
int SENSOR_READING[8];
void read(int SENSOR_READING[]){
    cout<<"Enter the Sensors Readings : \n";
    for(int i=0;i<8;i++){
        cin >> SENSOR_READING[i];
    }
}
double RobotsPosition(int SENSOR_READING[] ){
    int sum=0;
    int count=0;

    for(int i=0;i<8;i++){
        if(SENSOR_READING[i]==1){
            sum+=i;
            count++;
        }
    }
    if(count==0) return -1;

    return (double)sum/count;

}
void calculate(){
    double position=RobotsPosition(SENSOR_READING);

    if (position == -1){
        cout << "Action : Line Lost \n";
    }
    else if (position < 2){
        cout << "Action : Turn Left \n";
    }
    else if (position > 5){
        cout << "Action : Turn Right \n";
    }
    else{
        cout << "Action : Move Forward \n";
    }

}

int main(){
    read(SENSOR_READING);
    RobotsPosition(SENSOR_READING);
    calculate();
    
    
    return 0;

}

