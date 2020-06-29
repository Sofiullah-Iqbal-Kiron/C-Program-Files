///Accepted, it's simple.

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        int AB, AC;
        cin >> AB >> AC;
        cout << "Case " << i << ": " << (AB*AB)+(AC*AC) << endl;
    }

    return 0;
}
