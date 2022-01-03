#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N, i;
        long long int S;
        cin >> N >> S;
        long long int A[N];

        for(i=0; i<N; i++)
        {
            cin >> A[i];
        }

        int start = 0, last = 0;
        bool flag = false;
        unsigned long long int cur_sum = 0;
    }
}
        /*for(int i=0;i<n;i++)
        {
            currsum += arr[i];
            if(currsum>=k)
            {
                last=i;
                while(k<currsum && start<last)
                {
                    currsum -= arr[start];
                    ++start;
                }

                if(currsum==k)
                {
                    cout<<start+1<<" "<<last+1<<endl;
                    flag = true;
                    break;
                }
            }
        }
        if(flag==false)
        cout<<-1<<endl;

    }
	return 0;
}*/
