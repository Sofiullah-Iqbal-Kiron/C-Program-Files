#include<iostream>
using namespace std;

int main()
{
    int n, i, k=0, m=0;
    cout << "Enter the number for multiplication table:- "; cin >> n;
    for(i=1; m<3 ;i++)
    {
        cout << n*i << " ";
        k++;
        if(k%10==0)
        {
            cout << endl;
            m++;
        }
    }

    return 0;
}
