#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    bubbleSort(arr, size);
    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}