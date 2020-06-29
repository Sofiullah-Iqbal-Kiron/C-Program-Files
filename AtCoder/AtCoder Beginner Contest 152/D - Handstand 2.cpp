#include<iostream>
using namespace std;

int ft(int n)
{
    while(n>=10)
    {
        n/=10;
    }
    return n;
}

int lt(int n)
{
    if(n>=10)
        return n%10;
    else
        return n;
}

int main()
{
    int N, i, j, k;
    cin >> N;
    int A[N], B[N];
    for(i=0; i<N; i++)
    {
        if(lt(i+1)!=0)
        {
            A[i]=i+1;
            B[i]=i+1;
        }
    }
    k=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if((ft(A[i]==lt(B[j])) && lt(A[i]==ft(B[j]))))
                k++;
        }
    }
    cout << k << endl;
}
