#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class human
{
public:

    string name, color;
    int age, study_class;

    void get_input(void)
    {
        cout << "Enter your name, color, age and present study class:- "; cin >> name >> color >> age >> study_class;
    }

    void display(void)
    {
        cout << "\nyou are a nice man whose name is " << name << ", color of body is " << color << ", age is " << age << " and study in class " << study_class << "." << endl;
    }
};

int main()
{
    human saiful;
    saiful.get_input();
    saiful.display();

    printf("\nThanks."); /* For using the header file named 'bits/stdc++.h' we can use c languages standard input/output functions. */
    cout << "\nThe program was developed in 28 September, 2019.\n11:23 AM.\n";

    return 2;
}

/// Author: HOTOVAGA kiron
