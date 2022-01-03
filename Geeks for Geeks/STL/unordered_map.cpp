//C++ program to demonstrate functionality of unordered_map.\
//I can't run this in my compiler. That's why, I used map instead of unordered_map.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m["Kiron"] = 65;
    m["Nirob"] = 64;

    map<string, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second;
    }
}
