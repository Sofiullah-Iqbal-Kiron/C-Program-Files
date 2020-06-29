#include<iostream>
using namespace std;

class Distance
{
    int meter;
public:
    Distance()
    {
        meter = 0;
    }

    friend int addFive(Distance d)
    {
        d.meter += 5;
        return d.meter;
    }
};

int main()
{
    Distance D;
    cout << addFive(D);
}
