#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

void convert(int y, int decimal)
{
    string con;
    int rem, i;
    for(i=0; decimal>0; i++)
    {
        con.push_back((decimal%y) + '0');
        decimal /= y;
    }
    reverse(con.begin(), con.end());
    cout << con << endl;
}

START

    int y, x_number;
    cout << "Enter the base for output: "; cin >> y;
    cout << "Enter number in decimal: "; cin >> x_number;
    cout << "Converted number: ";
    convert(y, x_number);

END

