#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

int binary(int decimal)
{
    vector<int> bin;
    int rem;
    while(decimal>0)
    {
        rem = decimal%2;
        bin.push_back(rem);
        decimal /= 2;
    }

    vector<int> :: iterator it;
    reverse(bin.begin(), bin.end());
    for(it=bin.begin(); it!=bin.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

START

    int decimal;
    while(true)
    {
        cout << "Enter the decimal number: "; cin >> decimal;
        cout << "Binary representation of " << decimal << ": ";
        binary(decimal);
    }

END
