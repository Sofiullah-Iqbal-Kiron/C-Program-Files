///Accepted. My first accepted code in codeforces but I can't understand how? Where the second case of sample test doesn't matched.
///This is un believe able.
///Codeforces says that, "you can output any of them". So, let's go...
///Codeforces doesn't accept the extra stand form of the code. As the system("pause") method, etc.

#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int x, a, b;
        cin >> x;
        for(int i=1, j=x-1; i<=x/2; i++, j--)
        {
            a = i;
            b = j;
            if(gcd(a, b)+lcm(a, b)==x)
            {
                cout << a << " " << b << endl;
                break;
            }
        }
    }
}
