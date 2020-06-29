#include<iostream>
using namespace std;
class temp
{
    int Fahrenheit, celsius;
    public:
    temp(int F)
    {
        Fahrenheit = F;
        celsius = (5*(Fahrenheit-32))/9;
        cout << celsius << endl;
    }
};

int main()
{
    temp T(40);
}