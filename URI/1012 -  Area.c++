//Accepted.

#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main()
{
    double a, b, c, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    cin >> a >> b >> c;
    TRIANGULO = 0.5 * a * c;
    CIRCULO = pi * c * c;
    TRAPEZIO = 0.5 * (a + b) * c;
    QUADRADO = b * b;
    RETANGULO = a * b;
    cout << fixed << setprecision(3) << "TRIANGULO: " << TRIANGULO << endl
         << "CIRCULO: " << CIRCULO << endl
         << "TRAPEZIO: " << TRAPEZIO << endl
         << "QUADRADO: " << QUADRADO << endl
         << "RETANGULO: " << RETANGULO << endl;
}
