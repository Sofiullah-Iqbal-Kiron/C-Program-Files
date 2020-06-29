///Accepted.

#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        float r;
        cin >> r;
        cout << "Case " << i << ": " << fixed << setprecision(2) << 1.7168*r*r << endl;
    }

}

