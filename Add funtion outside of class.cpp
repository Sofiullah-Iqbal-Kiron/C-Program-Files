#include<iostream>
#include<string>

using namespace std;

class human  /// There is no need any colon or semicolon.
{
public:     /// Access Specifier at class. All of the statements after this specifier can be accessed publicly.
};         /// The body of class must end with semicolon (;).

int add (int a, int b);

int main()
{
    int x, y;
    cout << "Enter two integer number:- ";
    cin >> x >> y;
    add (x, y);
    return 0;
}

int add (int a, int b) /// This is a function, not a method. All methods are function but all of functions are not method.
    {
        int sum;
        sum = a+b;
        cout << "The added value is " << sum << "." << endl;
    }
