#include<iostream>
using namespace std;

int main()
{
    /*
     typedef is a keyword for defining predefined type with new
     name. This also used to assign new name for an existing
     data-type.
     Syntax: typedef original_name new_name;
    */

    typedef long long int lli;
    lli a;
    cin >> a;
    cout << a << " is a long long int data defined by typedef." << endl;
}
