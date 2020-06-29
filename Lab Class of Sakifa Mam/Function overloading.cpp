#include<iostream>
using namespace std;

int sum()
{
    int a, b;
    int sum=a+b;
    cout << sum << endl;
}

int sum(int, int, int)
{
    int a, b, c;
    int sum = a+b+c;
    cout << sum << endl;
}

int main()
{
    sum(10, 5);
    sum(20, 15, 25);

    return 0;
}
