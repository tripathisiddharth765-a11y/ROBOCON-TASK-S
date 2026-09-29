#include <iostream>
using namespace std;

class Robot
{
private:
    int speed;

public:
    void Forward(int speed)
    {
        this->speed = speed;
        cout << "Bot is moving forward with the seed of : " << speed << "\n";
    }
    void backward(int speed)
    {
        this->speed = speed;
        cout << "Bot is moving backward with the soeed if : " << speed << "\n";
    }
    void left(int speed)
    {
        this->speed = speed;
        cout << "Bot is moving left with the soeed if : " << speed << "\n";
    }
    void right(int speed)
    {
        this->speed = speed;
        cout << "Bot is moving right with the soeed if : " << speed << "\n";
    }
};

int main()
{
    Robot r;
    char choice;
    int speed;
    while (true)
    {
        cout << "Enter f,b,r,l or e to terminate  \n";
        cin >> choice;
        cout << "Enter speed of the bot: ";
        cin >> speed;

        if (choice == 'e')
        {
            cout << "Programme terminated \n";
            break;
        }
        switch (choice)
        {
        case 'f':
            r.Forward(speed);
            break;

        case 'b':
            r.backward(speed);
            break;

        case 'l':
            r.left(speed);
            break;

        case 'r':
            r.right(speed);
            break;

        default:
            cout << "invalid input \n";
        }
    }
    return 0;
}