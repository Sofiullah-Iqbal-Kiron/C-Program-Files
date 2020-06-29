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

class AM
{
    int x, y, a;
public:
    AM()
    {
        P "This is exception constructor"; LB;
    }
    ~AM()
    {
        P "This is exception destructor"; LB;
    }
};

START

    try
    {
        AM obj;
        throw 77;
    }
    catch(int i)
    {
        P "Caught " << i; LB;
    }

END
