#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, c, change;
    char b;
    cout << "Enter first number, operator, second number: ";
    cin >> a;
    scanf("%c", &b);
    cin >> c;
    if(b=='/')
    {
        cout << "Answer = " << a/b;
    }
    /*else if(b=='*')
    {
        cout << "Answer = " << a*b;
    }
    else if(b=='-')
    {
        cout << "Answer = " << a-b;
    }
    else if(b=='+')
    {
        cout << "Answer = " << a+b;
    }
    else
    {
        exit(0);
    }*/
}
