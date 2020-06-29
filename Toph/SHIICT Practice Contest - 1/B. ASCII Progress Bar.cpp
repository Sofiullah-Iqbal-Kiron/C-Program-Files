///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    double P;
    cin >> P;
    int a, percent = P;
    a = P/10;
    cout << "[";
    for(int i=0; i<a; i++)
    {
        cout << "+";
    }
    for(int i=0; i<10-a; i++)
    {
        cout << ".";
    }
    cout << "]" << " " << percent << "%" << endl;

END
