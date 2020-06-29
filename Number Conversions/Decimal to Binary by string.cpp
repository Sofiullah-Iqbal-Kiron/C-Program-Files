#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

void binary(int decimal)
{
    string bin;
    int rem, i;
    for(i=0; decimal>0; i++)
    {
        bin.push_back((decimal%2) + '0');
        decimal /= 2;
    }
    reverse(bin.begin(), bin.end());
    cout << bin << endl;
}

START

    int decimal;
    cin >> decimal;
    cout << "Binary representation of " << decimal << ": ";
    binary(decimal);

END
