/// Use of manipulators.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int b=950, c=95, d=b+c;
    cout << "b =" << setw(10) << b << endl
         << "c =" << setw(10) << c << endl
         << "d =" << setw(10) << d << endl;
}
