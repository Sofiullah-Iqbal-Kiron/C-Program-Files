#include<iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int &size)
{
    int i, j;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                Swap(arr[j], arr[j+1]);
            }
        }
    }
}

void get_array(int arr[], int &size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    get_array(arr, size);
    bubble_sort(arr, size);
    print_array(arr, size);
}
