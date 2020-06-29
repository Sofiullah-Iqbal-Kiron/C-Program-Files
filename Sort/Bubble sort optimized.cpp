///The order of this algorithm: O(n*n) or O(n^2).

#include<iostream>
using namespace std;

void Swap(int &a, int &b);

void get_array(int arr[], int &size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

int bubble_sort(int arr[], int &size)
{
    int i, j, swaps=0;
    bool swapped;
    for(i=0; i<size-1; i++)
    {
        swapped = false;
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                Swap(arr[j], arr[j+1]);
                swaps++;
                swapped = true;
            }
        }
        if(swapped = false)
        {
            break;
        }
    }

    cout << "The number of swaps: " << swaps << endl;
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

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
