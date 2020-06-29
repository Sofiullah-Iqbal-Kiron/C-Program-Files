///3n+1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> ans;
    int i, j, n;
    cin >> i >> j;
    cout << i << " " << j << " ";
    while(i<=j)
    {
        int k=0;
        n=j;
        while(n>=1)
        {
            if(n%2==0)
            {
                n=n/2;
                k++;
            }
            else
            {
                n=3*n+1;
                k++;
            }
        }
        ans.push_back(k);
        i++;
    }
    sort(ans.begin(), ans.end());
    cout << *max_element(ans.begin(), ans.end()) << endl;
}
