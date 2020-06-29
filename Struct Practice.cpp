#include<bits/stdc++.h>
using namespace std;

///Now we gonna learning structure in C++.
/*
    Sometimes we need a group of different types
    data in one specific class collection. For get
    released from this problem, C and C++ provides
    a new user-defined data-type.
    To define a structure, use the keyword "struct".
*/
struct student
{
    /*
        All members of struct is generally public.
    */
    int ID;
    string sex;
};

int main()
{
    /*
        Let's declare a student struct of class 6 that
        has 3 students.
        First student(class6[0]) has 33 as roll.
    */
    student class6[3];
    class6[0].ID=33;
    class6[1].ID=34;
    cout << class6[0].ID << endl;
    cout << class6[1].ID << endl;
    student kiron;
    cin >> kiron.ID;
    cout << "Kirons id " << kiron.ID << endl;
    cin >> kiron.sex;
    cout << "Kirons sex " << kiron.sex << endl;

    /*
        Let's declare a pointer of type student.
        That can store address of student type variables.
    */
    student *ptr;
    /*
        Now This pointer will store address of kiron's all
        member function.
    */
    ptr = &kiron;
    /*
        Now ptr points to all member variable of
        struct variable kiron.
    */

    kiron.ID=65;
    ptr->sex="Male";
    cout << ptr->ID << endl;
    cout << kiron.sex << endl;
    /*
    	Arrow operator is used for access by pointer.
    */
}
