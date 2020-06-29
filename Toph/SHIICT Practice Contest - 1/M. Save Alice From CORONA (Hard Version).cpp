///Accepted. Mair from number theory.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    string N;
    cin >> N;
    int num, last_four, last_three, last_two;;
    if(N.size()<2)
    {
        num = N[N.size()-1]-'0';
        last_two = num;
    }
    else
    {
        last_two = (N[N.size()-2]-'0')*10 + (N[N.size()-1]-'0');
    }
    last_three = (N[N.size()-3]-'0')*100 + (N[N.size()-2]-'0')*10 + (N[N.size()-1]-'0');
    last_four = (N[N.size()-4]-'0')*1000 + (N[N.size()-3]-'0')*100 + (N[N.size()-2]-'0')*10 + (N[N.size()-1]-'0');
    if(((last_two % 4 == 0) && (last_three % 100 != 0)) || (last_four % 400 == 0))
    {
        cout << "SORRY ALICE" << endl;
    }
    else
    {
        cout << "LUCKY ALICE" << endl;
    }

END
