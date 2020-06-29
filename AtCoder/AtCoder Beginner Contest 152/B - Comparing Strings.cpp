#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s1, s2;
    int i=a;
    while(i>0)
    {
        s1.push_back(b + '0');
        i--;
    }
    i=b;
    while(i>0)
    {
        s2.push_back(a + '0');
        i--;
    }
    cout << min(s1, s2) << endl;
}

/*int a, b;
cin>>a>>b;
string str1, str2;
for(int i = 0; i < a; i++) str1.push_back(b + '0');
for(int i = 0; i < b; i++) str2.push_back(a + '0');
cout<<min(str1, str2)<<endl;*/

/*int a, b, i;
 cin >> a >> b;
 string s(b, '0'+a);
 string t(a, '0'+b);
 cout << min(s, t) << endl;*/
