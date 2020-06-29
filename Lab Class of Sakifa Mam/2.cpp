#include<iostream>
using namespace std;

class add
{
public:
    int a, b, c;
    int sum()
    {
        cin >> a >> b;
        cout << a+b << endl;
    }
    int sum()
    {
        cin >> a, b, c;
        cout << a+b+c << endl;
    }
};

int main()
{
    add a;
    a.sum();
    a.sum();
}
