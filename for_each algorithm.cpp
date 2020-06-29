#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(const int &n) { cout << " " << n; }

int main()
{
    //vector initialization by an array.
    int arr[] = {1, 2, 3, 4};
    vector<int> v(arr, arr + 4);

    //Is lambda function will work? No, lambda expressions only available on C++11.
    cout << "Numbers are:";
    for_each(v.begin(), v.end(), print);
}