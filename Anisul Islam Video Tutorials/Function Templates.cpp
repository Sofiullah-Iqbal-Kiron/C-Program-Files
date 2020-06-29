#include<iostream>
using namespace std;

template <class add>
add ad(add a, add b)
{
    return a+b-a/2;
}

int main()
{
    cout << ad(10, 20) << endl;
    cout << ad(10.9, 20.6) << endl;
}
