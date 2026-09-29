#include<iostream>
using namespace std;
int main(){

    int count[10]={0};
    int number;
    cout<<"Enter a 10 digit number: ";
    cin>>number;
    if(number=0){
        cout<<"Please enter a valid 10 digit number."<<'\n';
        return 0;
    }
    while(number>0){
        int digit=number%10;
        count[digit]++;
        number/=10;
    }
    for(int i=0;i<10;i++){
        if(count[i]>0){
            cout<<"Digit "<<i<<" occurs "<<count[i]<<" times."<<'\n';
        }
    }

    return 0;

}