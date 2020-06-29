#include<iostream>
using namespace std;

class sample
{
    int x;
    float y;
public:
    sample(int, float);
    void display();
};

sample :: sample(int one, float two)
{
    x = one;
    y = two;
}

void sample :: display()
{
    cout << "Integer number(x) = " << x << endl;
    cout << "Integer number(y) = " << y << endl << endl;
}

int main()
{
    sample obj1(10, -22.55);
    sample obj2(20, -33.44);
    obj1 = obj2;
    cout << "Contents of the first object:-\n";
    obj1.display();
    cout << "Contents of the second object:-\n";
    obj2.display();

    return 0;
}
