#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int n;
    cin >> n;
    int arr[n*n];
    for(int i=0; i<n*n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n*n);
    for(int i=0; i<n*n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

END
