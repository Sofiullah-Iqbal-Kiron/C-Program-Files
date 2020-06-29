#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i, j, nth;
    cin >> nth;
    long long int m=nth*13;
    long long int prime[m];
    int k=0;
    for(i=2; i<=m; i++)
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
            prime[k]=i; k++;
        }
    }
    cout << prime[nth-1] << endl;
}
