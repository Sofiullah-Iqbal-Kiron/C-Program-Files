///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    long long int N;
    cin >> N;
    if(((N % 4 == 0) && (N % 100 != 0)) || (N % 400 == 0))
    {
        cout << "SORRY ALICE" << endl;
    }
    else
    {
        cout << "LUCKY ALICE" << endl;
    }

END
