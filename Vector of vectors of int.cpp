#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*vector< vector< int > > v;
    vector<int> point1, point2, point3;
    point1.push_back(1);
    point1.push_back(2);

    point2.push_back(3);
    point2.push_back(4);

    point3.push_back(5);
    point3.push_back(6);

    v.push_back(point1);
    v.push_back(point2);
    v.push_back(point3);

    cout << v[1][1] << endl;
    cout << v[0].size() << endl;
    cout << v.size() << endl;*/

    vector< pair<int, int> > v;
    v.push_back({1, 3});
    v.push_back({3, 2});
    v.push_back({2, 3});
    sort(v.begin(), v.end());
    cout << v[2].first << endl;
}
