#include<iostream>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while(t>0)
    {
        cin >> n;
        int s[n];
        cin >> s[n];
        int sum=0;
        for(i=0; i<n; i++)
        {
            sum+=s[0];
        }
        if(sum%2==0 && s[n]%2!=0)
        {
            cout << s[n] << endl;
        }
        if(sum%2!=0)
        {

        }

        t--;
    }
}
