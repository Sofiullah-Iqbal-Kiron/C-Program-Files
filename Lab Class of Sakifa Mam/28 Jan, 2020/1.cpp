///Friend, Inheritance

#include<iostream>
using namespace std;

class A
{
    int r, circle;
    friend int area(A a);
};

int area(A a)
{
    cout << "Enter radius: "; cin >> a.r;
    a.circle=3.14159265*a.r*a.r;
    cout << a.circle << endl;
}

int main()
{
    A circle;
    area(circle);
}
