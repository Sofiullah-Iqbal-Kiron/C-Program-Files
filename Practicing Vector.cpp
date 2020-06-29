#include<iostream>
#include<vector>
#include<cstdlib>
#define START int main(){
#define END system("PAUSE");return 0;}
#define EQUALS ==
#define LB cout << endl
#define IS_EQUALS_TO ==
#define IS_NOT_EQUAL_TO !=
#define P cout <<
#define I cin >>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        P v[i] << " ";
    }
    LB;
}

START

  vector<int>v;
    cout << "Enter five values:";
    int x;
    for(int i=0; i<5; i++)
    {
        I x;
        v.push_back(x*x);
    }
    P "Current size of this vector (May be five): " << v.size();
    LB;
    if(v.size() EQUALS 4)
        P "The size is " << v.size();
    LB;
    display(v); /// Passing the object as parameter.

    /// Iterators act as like pointers.

    v.push_back(6.6);
    display(v);

    vector<int> :: iterator itr = v.begin(); /// Here iterator points first element(0 index).
    itr+=3; /// Now this iterator points to the 4'th elements.
    /// The program uses an iterator to access any elements.
    v.insert(itr, 3, 'A'); /// itr points 4'element. inserting 2 times 'A' or 65 from the 4'th place.
    display(v);

    v.erase(itr, itr+2); ///Erasing 4'th and 5'th elements.
    display(v);

    vector<int> b;
    for(int i=0; i<5; i++)
    {
        b.push_back(i);
    }
    display(b);

    swap(v, b); ///Swap all elements of two vector. That's mean swap total vector.
    display(v);
    display(b);

    for(int i=v.at(1); i<5; i++) ///Variable name.at(index)
    {
        P v[i] << " ";
    }
    LB;

END

