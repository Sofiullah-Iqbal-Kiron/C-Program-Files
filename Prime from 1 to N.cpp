#include<iostream>
using namespace std;

int main()
{
    int i, j, N;
    cout << "Enter a number for illustrating prime numbers: "; cin >> N;
    cout << "The prime numbers till " << N << endl;
    int m=1;
    for(i=2; i<=N; i++)
    {
        int c=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout << m << " = " << i << " " << endl; m++;
        }
    }
}
