// Copy constructor, Okay.

#include<iostream>
using namespace std;

class code
{
    int id;
public:
    code(){}
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void show()
    {
        cout << id << endl;
    }
};

int main()
{
    code A(100), B(A), C = A, D;
    D = A;
    A.show();
    B.show();
    C.show();
    D.show();

    return 0;
}
