#include<bits/stdc++.h>
using namespace std;

class shape
{
    int width, height;
public:
    shape(int w, int h)
    {
        width = w;
        height = h;
    }
    area()
    {
        return width*height;
    }
};

int main()
{
    shape triangle(10, 5), rectangle(11, 6);
    cout << "Area of triangle: " << 0.5*triangle.area() << endl;
    cout << "Area of rectangle: " << rectangle.area() << endl;
}
