#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        int submissions=0, accepted=0;
        double percentage;
        cin >> submissions >> accepted;
        percentage = (100.00*accepted)/submissions;
        cout << percentage << "%" << " code accepted." << endl;
    }
}
