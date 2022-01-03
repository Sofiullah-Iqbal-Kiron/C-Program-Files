// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin >> N;
    int intPart = (int)N, fracPart = (int)((N - intPart) * 100), noteUnits[] = {100, 50, 20, 10, 5, 2}, numberOfNotes[] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 6; i++)
    {
        numberOfNotes[i] = intPart / noteUnits[i];
        intPart %= noteUnits[i];
    }
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
        cout << numberOfNotes[i] << " nota(s) de R$ " << noteUnits[i] << ".00" << endl;

    int coinUnits[] = {100, 50, 25, 10, 5, 1}, numberOfConis[] = {0, 0, 0, 0, 0, 0};
    string originalCoinUnits[] = {"1.00", "0.50", "0.25", "0.10", "0.05", "0.01"};
    numberOfConis[0] = intPart;
    for (int i = 1; i < 6; i++)
    {
        numberOfConis[i] = fracPart / coinUnits[i];
        fracPart %= coinUnits[i];
    }
    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
        cout << numberOfConis[i] << " moeda(s) de R$ " << originalCoinUnits[i] << endl;
}