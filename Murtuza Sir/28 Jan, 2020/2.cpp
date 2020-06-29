#include<iostream>
using namespace std;



class Box
{
    int l, w;
    public:
    Box(int i, int j)
    {

        l=i;
        w=j;
        count ++;
    }

    int Area()
    {
        return l*w;
    }
    static int getcount();
};

int Box::count = 0;

int main()
{
    Box b1(3, 4);
    cout << Box::getcount() << endl;
    int p=b1.Area();
    cout << p << endl;
    Box b2(5, 6);
    cout << Box::count << endl;

}
