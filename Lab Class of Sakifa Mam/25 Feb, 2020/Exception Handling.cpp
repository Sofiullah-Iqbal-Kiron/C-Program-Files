#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
#define EQUALS ==
#define LB cout << endl
#define IS_EQUALS_TO ==
#define IS_NOT_EQUAL_TO !=
#define P cout <<
#define I cin >>
using namespace std;

START

int x, y, a;
I x >> y;
a = x-y;

try
{
    if(a IS_NOT_EQUAL_TO 0)
    {
        P "Dividing y by a is" << y/x;
        LB;
    }
    else
    {
        throw 1;
    }
}

catch(...)
{
    P "Invalid processes";
    LB;
}

END
