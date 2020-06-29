#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

int T, prime[]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
cin >> T;
while(T--)
{
    int N, i, c=0, sum=0;
    cin >> N;
    for(i=0; i<15; i++)
    {
        if(prime[i]>N)
        {
            for(int j=i-1; j>=0; j--)
            {
                sum += prime[j];
                c++;
                if(sum==N)
                {
                    break;
                }
                else if(sum>N)
                {
                    sum -= prime[j];
                    c--;
                }
            }
            break;
        }
        else if(prime[i]==N)
        {
            cout << "1" << endl;
            return 0;
        }
    }
    if(sum>0)
    {
        cout << c << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

END
