#include<iostream>
#include<vector>
using namespace std;

void pigeonhole_sort(int arr[], int n)
{
    int i, max, min, range;
    max=arr[0], min=arr[0];
    for(i=1; i<n; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    range = max-min+1;
    vector<int> hole[range];

    for(i=0; i<n; i++)
    {
        hole[arr[i]-min].push_back(arr[i]);
    }
    int index=0;
    for(i=0; i<range; i++)
    {
        vector<int> :: iterator it;
        for(it=hole[i].begin(); it!=hole[i].end(); ++it)
        {
            arr[index++]=*it;
        }
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
    pigeonhole_sort(arr, n);
    for(int j=0; j<n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}
