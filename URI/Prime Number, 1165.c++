// ac

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (prime(x))
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }
}