///Sample input output matched.

#include<iostream>
using namespace std;

int bubble_sort(string s[], int id[], int &T)
{
    int i, j;
    bool swapped;
    for(i=0; i<T; i++)
    {
        swapped = false;
        for(j=0; j<T-i-1; j++)
        {
            if(s[j]>s[j+1])
            {
                swap(s[j], s[j+1]);
                swap(id[j], id[j+1]);
                swapped = true;
            }
        }
        if(swapped = false)
        {
            break;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    string s[T];
    int id[T];
    for(int i=0; i<T; i++)
    {
        cin >> s[i] >> id[i];
    }
    bubble_sort(s, id, T);
    for(int i=0; i<T; i++)
    {
        cout << s[i] << " " << id[i] << endl;
    }
}
