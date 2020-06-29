// Adding two vectors by using plus operator overloading.

#include<iostream>
using namespace std;

class vector
{
    int x, y, z;
public:
    vector(){}
    vector(int ax, int ay, int az)
    {
        x = ax;
        y = ay;
        z = az;
    }
    vector operator+(vector v1)
    {
        vector temp;
        temp.x = x + v1.x;
        temp.y = y + v1.y;
        temp.z = z + v1.z;
        return temp;
    }

    void show()
    {
        cout << x << "i+" << y << "j+" << z << "k" << endl;
    }
};

int main()
{
    vector A(2, 3, 4);
    vector B(6, 9, 12);
    vector C = A+B;
    C.show();

    return 9;
}
