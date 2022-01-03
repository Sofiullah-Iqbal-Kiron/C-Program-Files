// ac

#include <iostream>
using namespace std;

int main()
{
    int val;
    while (true)
    {
        cin >> val;
        if (val == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha Invalida" << endl;
    }

    return 0;
}