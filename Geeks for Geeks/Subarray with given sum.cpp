///Correct but not accepted! Why I don't know.

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, S, i, j, sum;
        cin >> N >> S;
        long long int A[N];
        for(i=0; i<N; i++)
        {
            cin >> A[i];
        }

        i=0;
        for(i=0; i<N; i++)
        {
            sum = A[i];

            for(j=i+1; j<=N; j++)
            {
                sum += A[j];
                if(sum == S || A[j]==S)
                {
                    if(sum == S)
                    {
                        cout << i+1 << " " << j+1 << endl;
                        return 0;
                    }
                    else if(A[j]==S)
                    {
                        cout << j+1 << " " << j+1 << endl;
                        return 0;
                    }
                    else
                    {
                        cout << "-1" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
