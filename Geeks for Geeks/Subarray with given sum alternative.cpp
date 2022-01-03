///Correct Confusing.

#include<iostream>
using namespace std;

int i, j, start, cur_sum;

int subarray(long long int A[], int N, int S)
{
    long long int cur_sum = A[0];
    start = 0;

    for(i=1; i<=N; i++)
    {
        while(cur_sum>S && start<i-1)
        {
            cur_sum -= A[start];
            start++;
        }

        if(cur_sum == S || A[i] == S)
        {
            if(cur_sum == S)
            {
                cout << start+1 << " " << i << endl;
                return 0;
            }
            else if(A[i] == S)
            {
                cout << i << " " << i << endl;
                return 0;
            }
            else
            {
                cout << "-1" << endl;
                return 0;
            }
        }

        cur_sum += A[i];
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, S;
        cin >> N >> S;
        long long int A[N];

        for(i=0; i<N; i++)
        {
            cin >> A[i];
        }
        subarray(A, N, S);
    }
    return 0;
}
