#include<iostream>
using namespace std;

int main()
{
    long long int a=0, b=1, res;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    while(n--)
    {
        cout << a;
        res = b;
        b = a+res;
        a = res;
        if(n!=0)
        {
            cout << ", ";
        }
        else
        {
            return 0;
        }
    }
}
