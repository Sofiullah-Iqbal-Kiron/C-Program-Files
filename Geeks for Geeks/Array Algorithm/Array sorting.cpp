///Now not applicable.

#include<iostream>
using namespace std;

int sort_total_array(int arr[], int n)
{
    int i, temp;
    for(i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

int main()
{
    int n, i;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array elements: ";
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting: ";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After sorting: ";
    sort_total_array(arr, n);
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
