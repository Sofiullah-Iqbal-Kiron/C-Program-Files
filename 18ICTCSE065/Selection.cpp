/********************************
    Assignment of CSE201.
    Author: Md. Kazi Iqbal Hossen
    Roll: 18ICTCSE065
 *******************************/

#include <iostream>
using namespace std;

class Selection
{
private:
    static int leastIndex(int arr[], int s, int e)
    {
        int min = arr[s], idx = s;
        for (int i = s + 1; i <= e; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                idx = i;
            }
        }

        return idx;
    }

public:
    static void sort(int arr[], int n) // n stands for size of the array "arr".
    {
        int s = 0, e = n - 1;
        while (s < e)
        {
            swap(arr[s], arr[leastIndex(arr, s, e)]);
            s++;
        }
    }

    static void printSortedArray(int arr[], int len)
    {
        cout << arr[0];
        for (int i = 1; i < len; i++)
            cout << " " << arr[i];
        cout << endl;
    }
};

main()
{
    int arr[] = {5, -1, 2, 0, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    Selection::sort(arr, len);
    Selection::printSortedArray(arr, len);
}

/* Code Verified */