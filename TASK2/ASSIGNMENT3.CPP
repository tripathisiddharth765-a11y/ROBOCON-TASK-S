#include <iostream>
using namespace std;
class Robot
{
    private:
    int battery;
    int speed;
    public:
    void setSpeed(int speed){
        if(speed>=0&&speed<=100){
            this->speed=speed;
        }
    }
    void setBattery(int battery){
        if(speed>=0&&speed<=100){
            this->battery=battery;
        }
    }
    void moveForward(){
        if(!battery==0){
            cout<<"Bot is moving forward \n ";
        battery-=5;
        cout<<"The speed of the bot : "<<speed<<" and the battery if the bot : "<<battery<<'\n';
        }
    }
    void moveBackward(){
        if(!battery==0){
            cout<<"Bot is moving Backward \n ";
        battery-=5;
        cout<<"The speed of the bot : "<<speed<<" and the battery if the bot : "<<battery<<'\n';
        }
    } 
    void turnLeft(){
        if(!battery==0){
            cout<<"Bot is turning Left \n ";
        battery-=5;
        cout<<"The speed of the bot : "<<speed<<" and the battery if the bot : "<<battery<<'\n';
        }
    }
    void turnRight(){
        if(!battery==0){
            cout<<"Bot is moving Right \n ";
        battery-=5;
        cout<<"The speed of the bot : "<<speed<<" and the battery if the bot : "<<battery<<'\n';
        }
    }
    void display(){
        cout<<"The speed of the bot : "<<speed<<" and the battery if the bot : "<<battery<<'\n';
    }
};
int main()
{
    Robot r1;
    int speed=0,battery=0;
    cout<<"Enter the speed : ";
    cin>>speed;
    cout<<"Enter the battery : ";
    cin>>battery;
    r1.setSpeed(speed);
    r1.setBattery(battery);
    r1.moveForward();
    r1.moveBackward();
    r1.turnLeft();
    r1.turnRight();
    r1.display();
    return 0;
}