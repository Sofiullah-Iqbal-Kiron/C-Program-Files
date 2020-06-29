///Can't Implement.

#include<bits/stdc++.h>
using namespace std;

int reverse(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int qcast(int arr1[], int n1, int arr2[], int n2)
{
    int i, c=0, till;
    if(n1>n2)
    {
        till=n2;
        c=n1-n2;
    }
    else
    {
        till=n1;
        c=n2-n1;
    }
    for(i=0; i<till; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int n, i, j;
    cin >> n;
    int fake[n];
    int key[n];
    int ans[n];
    for(i=0; i<n; i++)
    {
        cin >> fake[i];
        ans[i]=fake[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> key[i];
    }
    for(i=0; i<n; i++)
    {
        if(qcast(fake, n, ans, n))
        {
            ///do nothing
        }
    }
}
