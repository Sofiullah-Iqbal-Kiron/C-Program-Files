///Finding maximum and minimum value also.

#include<iostream>
using namespace std;

int find_max(int arr[], int n)
{
    int i=0, maxx=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>maxx)
        {
            maxx = arr[i];
        }
    }

    return maxx;
}

int find_min(int arr[], int n)
{
    int i=0, minn=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]<minn)
        {
            minn = arr[i];
        }
    }

    return minn;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter array elements: ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nMaximum value of this array " << find_max(arr, n) << endl;
    cout << "\nMinimum value of this array " << find_min(arr, n) << endl;
}
