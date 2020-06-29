#include<iostream>
using namespace std;

class imaginary
{
public:
    imaginary() /// Constructor, class and function are named same.
    {
        cout << "a= " << "2+" << "3j" << endl;
        cout << "b= " << "3+" << "5j" << endl;
    }
};

int main()

{
    imaginary i;
}
