#include<iostream>
using namespace std;

class student /// Parent class.
{
public:
    char name[30];
    int age;
    char gender[20];
    float marks;

    getinput()
    {
        cout << "Enter name, age, gender and marks: ";
        cin >> name; cin >> age; cin >> gender; cin >> marks;
    }

    show()
    {
        cout << "Name is: " << name << endl << "Age: " << age << endl << "Gender: " << gender;
    }
};

class student1: public student /// Inherit class.
{
public:
    int percentage;
    per()
    {
        percentage = marks*(0.4);
        cout << "Percentage = " << percentage << endl;
    }
};

int main()
{
    student1 s;
    s.getinput();
    s.show();
    s.per();
}
