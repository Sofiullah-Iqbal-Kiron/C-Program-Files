#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, j, present;
    for(i=1; i<n; i++)
    {
        present=arr[i];
        j=i-1;
        while(arr[j]>present)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=present;
    }
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
    insertion_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
