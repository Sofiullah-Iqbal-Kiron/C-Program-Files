#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(10);
    v.push_back(0);

    vector<int> :: iterator it;
    for(it=v.begin()+1; it!=v.end()-1; it++)
    {
        v.push_back(1);
    }
    v.push_back(9);

    for(int i=0; i<10; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
