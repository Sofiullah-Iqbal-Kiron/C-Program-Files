#include<iostream>
using namespace std;

class complex
{
    float x, y;
public:
    complex(){}
    complex(float a)
    {
        x=y=a;
    }
    complex(float real, float imag)
    {
        x=real;
        y=imag;
    }
    complex sum(complex &i)
    {
        complex c3;
        c3.x=i.x + x;
        c3.y=i.y + y;
        return sum;
    }

    void show()
    {
        complex c3;
        cout << c3.x << "+" << c3.y;
    }
};

int main()
{
    complex A(2.7, 3.5), B(1.6);
    sum(A, B);
}
