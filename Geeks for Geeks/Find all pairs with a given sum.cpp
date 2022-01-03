#include<iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int &n)
{
    int i, j;
    bool swapped;
    for(i=0; i<n-1; i++)
    {
        swapped = false;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                Swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false)
        {
            break;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, M, X, i, j, need;
        bool pair_exist=false, ppe=false;
        cin >> N >> M >> X;
        int A[N], B[M];
        for(i=0; i<N; i++)
        {
            cin >> A[i];
        }
        for(i=0; i<M; i++)
        {
            cin >>  B[i];
        }
        bubble_sort(A, N);
        bubble_sort(B, M);
        for(i=0; i<N; i++)
        {
            need = X-A[i];
            for(j=0; j<M; j++)
            {
                if(B[j]==need)
                {
                    pair_exist=true;
                    if(ppe==true)
                    {
                        cout << ", ";
                    }
                    cout << A[i] << " " << B[j];
                    ppe = true;
                    break;
                }
            }
        }
        if(pair_exist==false)
        {
            cout << "-1";
        }
        cout << endl;
    }
}
