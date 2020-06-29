#include<iostream>
using namespace std;

int main()
{
    int N, K, i;
    long long int m=0;
    cin >> N >> K;
    int Hi[N];
    for(i=0; i<N; i++)
    {
        cin >> Hi[i];
    }
    if(K>=N)
    {
        cout << "0" << endl;
    }
    else
    {
        for(i=0; i<(N-K); i++)
        {
            while(Hi[i]>0)
            {
                Hi[i]-=1;
                m++;
            }
        }
        cout << m << endl;
    }

    return 0;
}
