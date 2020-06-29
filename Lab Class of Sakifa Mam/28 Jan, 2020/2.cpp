#include<iostream>
using namespace std;

class circle
{
protected:
    int r;
public:
    int area(int nr)
    {
        nr=r;
        int rs=r*r;
        return 3.14159265*rs;
    }
};

class rectangle
{
protected:
    int w, l;
    int area(int nw, int nl)
    {
        nw=w;
        nl=l;
        return w*l;
    }
};

class triangle
{
protected:
    int w, l;
    int area(int nw, int nl)
    {
        nw=w;
        nl=l;
        return 0.5*w*l;
    }
};

int main()
{
    circle c;
    rectangle r;
    triangle t;
}
