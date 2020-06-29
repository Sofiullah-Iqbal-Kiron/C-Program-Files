#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int& p=a;
    int& q=b;
    int& r=a;
    p=3;
    q=4;
    cout << a << " " << b << endl;
    a+=1;
    cout << a << endl;
}
