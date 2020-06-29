#include<iostream>
#include<cstdlib>
using namespace std;

int fibonacci(int &n)
{
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i-2] << " ";
    }
    cout << fib[n-1] << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);

    system("pause");
}
