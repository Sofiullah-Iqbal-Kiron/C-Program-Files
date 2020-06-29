// Multiple Inheritance.

#include<iostream>
#include<conio.h>

using namespace std;

class std1
{
    public:
    char name[30];
    void name_out()
    {
      cout << "Enter name:- "; cin >> name;
      cout << "Name is: " << name;
    }
};

class std2
{
    public:
        char name[30];
    int id, fnl, mid, atn, per, total;
    void getdata()
    {
    cout << "Enter name, id, mid, atn, per and final:- \n";
    cin >> name >> id >> mid >> atn >> per >> fnl;
    }
    void out()
    {
        cout << "The total marks is: " << mid + atn + per + fnl << endl;
    }
};

class std3 : public std1, public std2
{
    public:
    void grade()
    {
        if(total<100 && total>80)
            cout << "A+ grede\n";
        else if(total<80 && total>70)
            cout << "A grede\n";
        else if(total<70 && total>60)
            cout << "A- grede\n";
        else if(total<60 && total>50)
            cout << "B grede\n";
        else if(total<50 && total>40)
            cout << "C grede\n";
        else if(total<40 && total>0)
            cout << "Fail\n";
    }
};

int main()

{
    std3 k;
    k.name_out();
    k.getdata();
    k.out();
    k.grade();
}
