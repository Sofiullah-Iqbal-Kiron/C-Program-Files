#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character please:- "; cin >> ch;
    ch = tolower(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("This character is vowel.\n");
    }
    else if(ch=='x' || ch=='y')
    {
        cout << "This character is semi-vowel.\n";
    }
    else
    {
        cout << "This character is consonant.\n";
    }
    cout << "Thanks, Kiron";
}
