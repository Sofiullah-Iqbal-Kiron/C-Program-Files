#include<iostream>

/*For pair access, include this header file.
utility is a STL.*/
//#include<utility>
using namespace std;

int main()
{
    pair<int, int>p1;
    p1.first = 1;
    p1.second = 2;
    cout << p1.first << " " << p1.second << endl;

    ///Declaring pair array with the size 4.
    pair<int, int>p[4];
    //All pair value assigned to 0 automatically.

    p[0].first=1;
    p[0].second=2;
    cout << p[0].first << " " << p[0].second << endl;

    /*Here we not assigned any value to the pair p[1] and p[2].
    So there will print 0*/
    cout << p[1].first << " " << p[1].second << endl;
    cout << p[2].first << " " << p[2].second << endl;

    /*
     Member function: make_pair().
     This member function assign values to pair directly.
     Thats mean, this is more sexy.
     Syntax: pair_name = make_pair(value1, value2);
    */
    pair<string, double> ps;
    ps = make_pair("My S.S.C result: ", 4.56);
    cout << ps.first << ps.second << endl;

    /*
     Operating pairs.
     1. (==) comparison.
        It will return 1 is those pairs both values are equal otherwise 0.
        As same for all other comparisons like >=, <=, != etc.
    */
    pair<int, int> pair1, pair2, pair3;
    pair1 = make_pair(1, 4);
    pair2 = make_pair(1, 4);
    pair3 = make_pair(2, 4.1);
    /*No matter what type value we assigned,
    It will type casted automatically by the data type as we declared.
    So it will be same as (2, 4).
    */

    if(pair1==pair2)
    {
        cout << "Pairs are same" << endl;
    }
    cout << (pair1==pair2) << endl;
    if(pair1!=pair3)
    {
        cout << "pair1 and pair3 are not same" << endl;
    }
    else
    {
        cout << "pair1 and pair3 are same" << endl;
    }

    /*
     swap()
     Syntax: pair1.swap(pair2);
     It will swap values of both pair.
     swap pair1.first with pair2.first then
     swap pair1.second with pair2.second
    */
    /*pair1.swap(pair3);
    cout << pair1.first << " " << pair1.second << endl;
    /*
     swap() isn't working in code::blocks but in other online compiler,
     it works perfectly.
    */
}
