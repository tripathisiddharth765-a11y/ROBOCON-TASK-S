#include<iostream>
using namespace std;
int main(){
    int SENSOR_READINGS[]={23, 45, 67, 89, 12, 34, 56, 78, 110, 11};
    int above=0;
    int lower=0;
    int avg=0;
    int max=SENSOR_READINGS[0];
    int min=SENSOR_READINGS[0];
    for(int i=0;i<10;i++){
        if(SENSOR_READINGS[i]>max){
            max=SENSOR_READINGS[i];
        }   
        if(SENSOR_READINGS[i]<min){
                min=SENSOR_READINGS[i];
            }

        if(SENSOR_READINGS[i]>100){
            above++;
        }
        if(SENSOR_READINGS[i]<20){
            lower++;
        }    

        avg+=SENSOR_READINGS[i];
    }
    avg/=10;
    cout<<"Maximum Sensor Reading: "<<max<<'\n';
    cout<<"Minimum Sensor Reading: "<<min<<'\n';
    cout<<"Number of Readings Above 100: "<<above<<'\n';
    cout<<"Number of Readings Below 20: "<<lower<<'\n';
    cout<<"Average Sensor Reading: "<<avg<<'\n';

    
    return 0;

}