#include<iostream>
using namespace std;

class person
{
    char name[30];
    int age;
public:
    void getinput()
    {

        cout << "Enter Name:";
        cin >> name;
        cout << "Enter age:";
        cin >> age;
    }
    void display()
    {
        cout << "\n name" << name;
        cout << "\n age" << age;
    }
};

int main()
{
    person p;
    p.getinput();
    p.display();

}
