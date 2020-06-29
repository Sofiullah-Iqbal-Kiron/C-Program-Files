// This is also a example of function overriding.

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

class student : public person
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
