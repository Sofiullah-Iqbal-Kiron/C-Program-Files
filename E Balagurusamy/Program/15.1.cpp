/// Creating String Objects(15.1)

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s1, s2("Sofiullah "), s3;
    cout << "Enter a line: ";
    getline(cin, s3);              /// Getting a line of string from keyboard.
    cout << s2+s3 << endl;
    cout << s2.size()-1 << endl;   /// Returning actual size of s2, string.
}
