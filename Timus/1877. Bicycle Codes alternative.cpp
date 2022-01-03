///But not accepted.
///Now accepted cause I added first time in if condition only (c1%2==0).
///"Timus" never Jhamela with endl or newline.("\n")

#include<iostream>
#include<sstream>
using namespace std;

main()
{
    int c1, c2;
    string s1, s2;
    cin >> s1 >> s2;
    stringstream s(s1), ss(s2);
    s >> c1; ss >> c2;
    if((c1%2==0) || (c2%2!=0))
        cout << "yes";
    else
        cout << "no";
}
