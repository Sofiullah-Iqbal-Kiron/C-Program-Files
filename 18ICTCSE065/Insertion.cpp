/********************************
    Assignment of CSE201.
    Author: Md. Kazi Iqbal Hossen
    Roll: 18ICTCSE065
 *******************************/

#include <iostream>

class Insertion
{
public:
    static void sort(int arr[], int n) // n stands for size of the array "arr".
    {
        int i = 1, j, key;
        while (i < n)
        {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j])
            {
                std::swap(arr[j], arr[j - 1]);
                j--;
            }
            i++;
        }
    }

    static void printSortedArray(int arr[], int len)
    {
        std::cout << arr[0];
        for (int i = 1; i < len; i++)
            std::cout << " " << arr[i];
        std::cout << std::endl;
    }
};

main()
{
    int arr[] = {5, 10, 3, 2, 8, 4, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    Insertion::sort(arr, 7);
    Insertion::printSortedArray(arr, 7);
}

/* Code Verified */