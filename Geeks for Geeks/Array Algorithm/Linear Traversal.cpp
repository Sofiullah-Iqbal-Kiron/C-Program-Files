///Nice job.

#include<iostream>
using namespace std;

int find_element(int arr[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            return i; /// 'i' is position.
        }
    }
    return -1;
}

///Driver Code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    if(find_element(arr, n, x)>0)
    {
        cout << x << " is found at the position of: " << find_element(arr, n, x)+1 << endl;
    }
    else
    {
        cout << "The element was not found." << endl;
    }

    return 0;
}
