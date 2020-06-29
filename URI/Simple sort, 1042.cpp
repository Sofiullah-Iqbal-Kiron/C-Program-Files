#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a>b && a>c && b>c)
    {
        cout << c << endl << b << endl << c << endl << endl;
    }
    else if(c>a && c>b && b>a)
    {
        cout << a << endl << b << endl << c << endl << endl;
    }
    else if(b>a && b>c && a>c)
    {
        cout << c << endl << a << endl << b << endl << endl;
    }
    else if(a>c && a>b && c>b)
    {
        cout << b << endl << c << endl << a << endl << endl;
    }
    else if(c>a && c>b && a>b)
    {
        cout << b << endl << a << endl << c << endl << endl;
    }
    else if(b>c && b>a && c>a)
    {
        cout << a << endl << c << endl << b << endl << endl;
    }
    cout << a << endl << b << endl << c << endl;

    return 0;
}
