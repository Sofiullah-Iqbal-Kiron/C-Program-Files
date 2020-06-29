#include<iostream>
using namespace std;

int max_subarray_sum(int arr[], int n)
{
    int current, best, i;
    current = (best = 0);
    for(i=0; i<n; i++)
    {
        current=max(current, current+arr[i]);
        best=max(current, best);
    }
    return best;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << max_subarray_sum(arr, n) << endl;
}
