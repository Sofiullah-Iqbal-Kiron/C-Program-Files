#include<iostream>
using namespace std;

class student
{
public:
    char name[30];
    int age;
    char gender[20];
    float marks;

    void getinput()
    {
        cout << "Enter name, age, gender and marks: "; cin >> name >> age >> gender >> marks >> endl;
    }

    void show()
    {
        cout << "Name is: " << name << endl << "Age: " << age << endl << "Gender: "
    }
};

class student1: public student
{
public:
    int percentage;
    int per()
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
