/// Let's code with cmath library.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, y;

    /// There is no need include any header file for max and min operation.
    /// C++ has many functions that allows us to perform mathematical tasks on numbers.

    cout << "Enter two integer number: "; cin >> x >> y;
    cout << "The major number is: " << max(x, y) << endl;
    cout << "The minor number is: " << min(x, y) << endl;

    /// For others mathematical operation, we need to add a header file named 'cmath'.
    cout << "Square root of first number: " << sqrt(y) << endl;
    cout << "Rounded number of 2.6 is " << round(2.6) << endl;
    cout << "The logarithm of first number: " << log(x) << endl;
    cout << "Absolute value of x/y " << fabs((float)x/(float)y) << endl;
    cout << "Difference between x and y: " << fdim(x, y) << endl;
    cout << "Otivuz due to respect of this two values: " << hypot(x, y) << endl;
    cout << "Floating point reminder due to respect of x divided by y: " << fmod(x, y) << endl;

    /// Many of mathematical functions in this 'cmath' library, returning wrong answer.

}
