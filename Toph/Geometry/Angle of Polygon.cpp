///Accepted. Care about data-type or cast the type (typecasting).

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        cout << (1-2.0/N)*180 << endl;
    }
}
