// This program will illustrate a class called point. This is the example of parameterized constructor.

#include<iostream>
using namespace std;

class point
{
    int x, y;
public:
    point(){x=0; y=0;}
    point(int a, int b)
    {
        x=a; y=b;
    }

    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    point A(1, 2), B(3, 4);
    cout << "First point: ";
    A.show();
    cout << "Second point: ";
    B.show();

    return 1;
}
