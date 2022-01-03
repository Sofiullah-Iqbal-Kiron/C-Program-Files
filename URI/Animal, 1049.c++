// ac
// +3.7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string att1, att2, att3;
    cin >> att1 >> att2 >> att3;

    if (att1 == ("vertebrado"))
    {
        if (att2 == ("ave"))
        {
            if (att3 == ("carnivoro"))
                cout << "aguia" << endl;
            else if (att3 == ("onivoro"))
                cout << "pomba" << endl;
        }
        else if (att2 == ("mamifero"))
        {
            if (att3 == ("onivoro"))
                cout << "homem" << endl;
            else if (att3 == ("herbivoro"))
                cout << "vaca" << endl;
        }
    }
    else if (att1 == ("invertebrado"))
    {
        if (att2 == ("inseto"))
        {
            if (att3 == ("hematofago"))
                cout << "pulga" << endl;
            else if (att3 == ("herbivoro"))
                cout << "lagarta" << endl;
        }
        else if (att2 == ("anelideo"))
        {
            if (att3 == ("hematofago"))
                cout << "sanguessuga" << endl;
            else if (att3 == ("onivoro"))
                cout << "minhoca" << endl;
        }
    }
}