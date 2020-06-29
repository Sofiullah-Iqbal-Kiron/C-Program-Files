#include<iostream>
using namespace std;

class abs
{
    int x;
public:
    void setx(int p)
    {
        x=p;
    }

    void inc(int q)
    {
        x=x+q;
    }
    void decr(int r)
    {
        x=x-r;
    }
    int show()
    {
        cout << x << endl;
        return 0;
    }
};

int main()
{

}
