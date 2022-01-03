// Accepted
// Pre: implemented in Java

#include <iostream>
using namespace std;

int main()
{
    int ih, im, fh, fm, h = 0, m = 0;

    // Taking input from console
    cin >> ih >> im >> fh >> fm;

    m = fm - im;
    if (ih < fh)
        h = fh - ih;
    else if (ih == fh && im == fm)
        h = 24;
    else if (m < 0 && ih == fh)
        h = 24;
    else if (ih > fh)
        h = (24 - ih) + fh;

    if (m < 0)
    {
        h--;
        m = 60 + m;
    }

    // Console output
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}