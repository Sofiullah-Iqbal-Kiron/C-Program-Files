#include<iostream>
#define END return 0;
using namespace std;

class Shape
{
protected:
    float l;
public:
    void input()
    {
        cin >> l;
    }

    virtual float Area() = 0;
};
class triangle : public Shape
{
public:
    float Area()
    {
        return 0.5*l*l;
    }
};

class Circle : public Shape
{
public:
    float Area()
    {
        return 3.14*l*l;
    }
};

int main()
{
    triangle t;
    Circle c;
    cout << "Enter length of a triangle: ";
    t.input();
    cout<<"Area of triangle: " << t.Area();
    cout<<"\nEnter radius of a circle: ";
    c.input();
    cout << "Area of circle: " << c.Area();

    END;
}
