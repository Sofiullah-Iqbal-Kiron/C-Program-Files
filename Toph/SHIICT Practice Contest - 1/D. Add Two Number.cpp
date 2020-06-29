#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    string str1, str2, str="";
    cin >> str1 >> str2;
    if(str1.size()>str2.size())
    {
        swap(str1, str2);
    }
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int n1=str1.size(), n2=str2.size(), carry = 0;
    for(int i=0; i<n1; i++)
    {
        int sum = (str1[i]-'0')+(str2[i]-'0');
    }

END
