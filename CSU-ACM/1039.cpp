#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, j;
    cin >> N;
    int ans[N];
    for(j=0; j<N; j++)
    {
        vector<int> v;
        int a;
        for(int i=0; i<3; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        ans[j] = ((*max_element(v.begin(), v.end()))-(*min_element(v.begin(), v.end())));
    }
    for(j=0; j<N; j++)
    {
        cout << ans[j] << endl;
    }
}

