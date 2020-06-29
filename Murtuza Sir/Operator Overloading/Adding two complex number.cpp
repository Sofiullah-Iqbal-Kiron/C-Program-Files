#include<iostream>
using namespace std;

class complex
{
    float x, y;
public:
    complex(){}
    complex(float real, float imag)
    {
        x=real;
        y=imag;
    }
    complex operator+ (complex c)
    {
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return (temp);
    }

    void show()
    {
        cout << "= " << x << " + " << y << "i" << endl;
    }
}c1, c2, c3;

int main()
{
    float a1, b1, a2, b2;
    cout << "Enter two set of complex numbers:- "; cin >> a1 >> b1 >> a2 >> b2;
    c1=complex(a1, b1);
    c2=complex(a2, b2);
    c3=c1+c2;
    c3.show();

    return 0;
}
