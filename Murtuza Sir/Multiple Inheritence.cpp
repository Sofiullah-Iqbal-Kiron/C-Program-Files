#include<iostream>
#include<conio.h>

using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle\n.";
    }
};

class fourwheeler: public vehicle
{
public:
    fourwheeler()
    {
        cout << "This is fourwheeler.\n";
    }
};

int main()
{

    getch();

    return 0;
}

