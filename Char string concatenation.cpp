#include<iostream>
#include<string.h>
using namespace std;

class addstring
{
public:
    char x[100];
    addstring(){}
    addstring(char a[100])
    {
        strcpy(x, a);
    }
    addstring operator+(addstring s2)
    {
        addstring s3;
        strcat(x, s2.x);
        strcpy(s3.x, x);
        return s3;
    }
};

int main()
{
    char char1[100]="Sofiullah ";
    char char2[100]="Iqbal.";
    addstring a1(char1), a2(char2), a3;
    a3=a1.operator+(a2);
    cout << a3.x << endl;
}
