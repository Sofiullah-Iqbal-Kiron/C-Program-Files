#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows(almost in 84): "; cin >> n; /// This program working in a great most of 84 input at big console.
    cout << "\n";
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=2*n-1; j++)
        {
            if (j >= n-(i-1) && j <= n+(i-1))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    getch();

    return 0;
}
