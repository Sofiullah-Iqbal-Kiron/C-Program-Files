#include<iostream>
using namespace std;

void recursive_bubble(int arr[], int size)
{
    if(size==1)
    {
        return;
    }

    for(int i=0; i<size-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    recursive_bubble(arr, size-1);
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int j=0; j<size; j++)
    {
        cin >> arr[j];
    }
    recursive_bubble(arr, size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
