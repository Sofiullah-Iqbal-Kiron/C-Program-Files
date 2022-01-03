///Accepted.

#include<iostream>
using namespace std;

int ans(int m, int n)
{
    int cn=0, cans=0, duplicate_n, duplicate_ans;
    duplicate_n = n;
    duplicate_ans = m+n;
    while(duplicate_n>0)
    {
        duplicate_n/=10;
        cn++;
    }
    while(duplicate_ans>0)
    {
        duplicate_ans/=10;
        cans++;
    }
    if(cans==cn)
    {
        return n;
    }
    else
    {
        return m+n;
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int M, N;
        cin >> M >> N;
        cout << ans(M, N) << endl;
    }
}
