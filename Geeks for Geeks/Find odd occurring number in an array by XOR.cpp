#include<iostream>
using namespace std;

int odd_occurred(int arr[], int n)
{
    int i, res=0;
    for(i=0; i<n; i++)
    {
        res^=arr[i];
    }
    return res;
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Odd occurred number is: " << odd_occurred(arr, n) << endl;
}
