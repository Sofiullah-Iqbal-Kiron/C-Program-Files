#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number you need to value till this: "; cin >> N;
    cout << "Square value:-" << endl;
    for(int i=1; i<=N; i++)
    {
        cout << "for " << i << ": " << pow(i, 2) << endl;
    }
    cout << endl << "Cubic value:-" << endl;
    for(int i=1; i<=N; i++)
    {
        cout << "for " << i << ": " << pow(i, 3) << endl;
    }
    cout << endl << "Fourth value:-" << endl;
    for(int i=1; i<=N; i++)
    {
        cout << "for " << i << ": " << pow(i, 4) << endl;
    }

    return 1;
}
