#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    void dataprocessing()
    {
        int n;
        int i;
        cout << "Enter number of student: ";
        cin >> n;
        string name[n];
        int id[n];
        int section[n];
        cout << "Enter student name, id and section(A or B)." << endl;
        for(i=0; i<n; i++)
        {
            cin >> name[i] >> id[i] >> section[i];
        }

        for(i=0; i<n; i++)
        {
            cout << "Name-" << i+1 << ": " << name[i] << ", " << "ID-" << i+1 << ": " <<  id[i] << ", " << "Section-" << i+1 << ": " << section[i] << endl;
        }
    }
}Kiron;

int main()
{
    Kiron.dataprocessing();
}
