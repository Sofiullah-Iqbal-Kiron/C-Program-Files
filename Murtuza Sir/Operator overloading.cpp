#include<iostream>
#include<conio.h>

using namespace std;

class complex
{
    int real, img;
public:

    complex(int r=0, int i=0)
    {
        real = r;
        img = i;
    }

    complex operator+(complex obj)
    {
        complex res;
        res.real  = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void print()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()

{
    complex A(2, 3);
    complex B(3, 4);
    complex C=A+B;
    C.print();

    //getch();

    return 0;
}

