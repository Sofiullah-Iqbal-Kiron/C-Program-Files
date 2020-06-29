#include<iostream>
using namespace std;

class Box
{
    public:
    int length, width, height;
public:
    virtual double Volume() = 0;
    int setl(int l)
    {
        length=l;
    }
    int getl()
    {
        return length;
    }
    int setw(int w)
    {
        width=w;
    }
    int getw()
    {
        return width;
    }
    int seth(int h)
    {
        height=h;
    }
    int geth()
    {
        return height;
    }
};

class tri:public Box
{
    public:
    tri (int Volume)
    {
        Volume = (length*height)/2;
    }
};

int main()
{
    tri t(2, 9);
    //t.setl(2);
    //t.seth(9)
    double V=t.Volume();
    cout << V << endl;
}
