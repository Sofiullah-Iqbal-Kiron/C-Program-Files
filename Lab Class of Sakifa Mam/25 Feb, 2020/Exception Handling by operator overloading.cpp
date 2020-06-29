#include<iostream>
#define START int main(){
#define END system("PAUSE");return 0;}
#define EQUALS ==
#define LB cout << endl
#define IS_EQUALS_TO ==
#define IS_NOT_EQUAL_TO !=
#define P cout <<
#define I cin >>
using namespace std;

class Distance
{
public:

    int feet, inch;

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    void operator-()
    {
        feet--;
        inch--;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
};

int main()
{
    try
    {
        Distance d1(8, 9);
        if(d1.feet>0 && d1.inch>0)
        {
            -d1;
        }
        else
        {
            throw 1;
        }
    }
    catch(...)
    {
        P "Exception caught";
        LB;
    }
}

