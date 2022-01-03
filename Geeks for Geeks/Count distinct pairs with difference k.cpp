///Code always produce correct ans but why GfG shows "floating point exception"?

#include<iostream>
using namespace std;

long long int fact(int n)
{
    int ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans*=i;
    }
    return ans;
}

int nC2(int n)
{
    return fact(n)/(2*fact(n-2));
}

int dif(int a, int b)
{
    if(a>b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, k, c=0, m=0, s=0, l=-1, w=-1;
        cin >> n;
        int arr[n];
        pair<int, int> p[nC2(n)];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(dif(arr[i], arr[j])==k)
                {
                    c++;
                    p[m] = make_pair(arr[i], arr[j]);
                    m++;
                }
            }
        }
        for(i=0; i<m+1; i++)
        {
            for(j=i+1; j<m+1; j++)
            {
                if(p[i]==p[j])
                {
                    p[j] = make_pair(l, w);
                    l--;
                    w--;
                    s++;
                }
            }
        }
        cout << c-s << endl;
    }
    return 0;
}
