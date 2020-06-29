#include<iostream>
using namespace std;

class base
{
public:
    void display()
    {
        cout << "Display Base" << endl;
    }
    virtual void show()
    {
        cout << "Show Base" << endl;
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "Display Derived" << endl;
    }
    void show()
    {
        cout << "Show Derived" << endl;
    }
};

int main()
{
    base b, *bptr;
    derived d;
    cout << "bptr points to base" << endl;
    bptr = &b;
    bptr->display();
    bptr->show();
    cout << "bptr points to derived" << endl;
    bptr = &d;
    bptr->display();
    bptr->show();
}
