#include<bits/stdc++.h>
using namespace std;

class person
{
public:
    void show()
    {
        cout << "I am a man." << endl;
    }
};

class student // : public person. If we don't inherit the person class, no matter, the object Kiron invoke the show method of student class, because of Kiron is a object of student class.
{
public:
    void show()
    {
        cout << "I am a student." << endl;
    }
};

int main()
{
    student Kiron;
    Kiron.show();
}
