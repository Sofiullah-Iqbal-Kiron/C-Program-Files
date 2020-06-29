#include<iostream>
using namespace std;

void Swap(string &s1, string &s2)
{
    string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Swap(s1, s2);
    cout << s1 << " " << s2;
}
