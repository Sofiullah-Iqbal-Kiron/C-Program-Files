/// n is the number taken from user. rev means reverse, rem means reminder.

#include<iostream>
using namespace std;

int main()
{
    int n, m, rev=0, rem;
    cout << "Enter a number for reverse:- "; cin >> n;
    m=n;
    while(m>0)
    {
        rem=m%10;
        m=m/10;
        rev=rev*10+rem;
    }
    cout << "The reversed number of " << n << " is "<< rev;

    return 0;
}
