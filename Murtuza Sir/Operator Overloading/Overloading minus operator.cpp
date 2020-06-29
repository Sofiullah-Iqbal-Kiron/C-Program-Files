// Here we overload minus operator for subtract two complex numbers.

#include<iostream>
using namespace std;

class complex
{
    float x, y;
public:
    complex(){}
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.x = x - c.x;
        temp.y = y - c.y;
        return temp;
    }

    void show()
    {
        cout << x << "+" << y << "i" << endl;
    }
};

int main()
{
    complex c1(2.5, 3.5), c2(1.6, 2.7), c3 = c1.operator-(c2);
    c3.show();

    return 0;
}
