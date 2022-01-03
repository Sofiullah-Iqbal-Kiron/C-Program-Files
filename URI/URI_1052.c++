// Accepted with C, C++

#include <iostream>
using namespace std;

int main()
{
    int no;
    cin >> no;
    string s[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << s[no - 1] << endl;
}