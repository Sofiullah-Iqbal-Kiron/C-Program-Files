// ac

#include <bits/stdc++.h>

using namespace std;

bool prime(int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (prime(x))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }

    return 0;
}

bool prime(int x)
{
    if (x == 0 || x == 1)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;

    return true;
}