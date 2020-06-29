#include<iostream>
using namespace std;

class Fclass
{
    int a, b;
public:
    void setvalue()
    {
        a=25;
        b=35;
    }
    friend int mean(Fclass F);
};

int mean(Fclass F)
{
    return (F.a+F.b)/2;
}

int main()
{
    Fclass F1;
    F1.setvalue();
    cout << mean(F1);
}
