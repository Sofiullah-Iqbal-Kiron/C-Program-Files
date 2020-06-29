#include<iostream>
#include<string>
using namespace std;

class animal
{
public:
    string name;
    int age;
    void set_value(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    animal Zebra, Dolphin;
    Zebra.set_value("Zoky", 13);
    Dolphin.set_value("Doly", 9);
    cout << "Zebra details: " << endl << "Name: " << Zebra.name << endl << "Age: " << Zebra.age << endl << endl;
    cout << "Dolphin details: " << endl << "Name: " << Dolphin.name << endl << "Age: " << Dolphin.age << endl;
}
