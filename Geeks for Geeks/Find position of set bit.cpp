#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        for(i=0; i<N/2; i++)
        {
            if(pow(2, i)==N)
            {
                break;
            }
        }
        if(pow(2, i)==N)
        {
            cout << "1" << endl;
            break;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
