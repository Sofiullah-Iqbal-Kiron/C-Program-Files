#include<iostream>

///Include header file of map.
#include<map>
using namespace std;

int main()
{
    ///Creating an empty map container variable.
    map<int, int> mp; //mp is the name of map.
    /*mp has two int member data.
    First one is key that must be unique. Second one is value associated with key.*/

    ///Inserting elements randomly.
    mp.insert(pair<int, int>(1, 40));
    mp.insert(pair<int, int>(2, 40)); //Value can be same.
    mp.insert(pair<int, int>(2, 30));
    /*Same as any previous key is not allowed. Thats why, we cannot access this element.
    OR, this will not assigned in mp.*/

    mp.insert(pair<int, int>(3, 33));

    //Declaring an iterator.
    map<int, int> :: iterator it;

    cout << "The map mp is:" << endl;
    cout << "\tKey\tElement" << endl;

    ///Let's print the map members with this iterator.
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout << '\t' << it->first << '\t' << it->second << endl;
        //first access key, second access value.
    }
    cout << endl;

    ///Assigning mp elements to pm.
    map<int, int> pm(mp.begin(), mp.end());

    ///Printing elements of pm.
    for(it=pm.begin(); it!=pm.end(); it++)
    {
        cout << '\t' << it->first << '\t' << it->second << endl;
    }
    cout << endl;

    ///Remove all elements up to elements with key=3
    pm.erase(pm.begin(), pm.find(3));

    ///Printing after erasing.
    for(it=pm.begin(); it!=pm.end(); it++)
    {
        cout << '\t' << it->first << '\t' << it->second << endl;
    }
    cout << endl;
    //After printing, we can see that, elements till 3 are deleted.

    /*
    Let's discuss about count() function.
    count() is a build in function of map container that returns the number that how many times
    specified key is present in the map container variable.

    Syntax 1: map_name.count(key);
              return 1 if the key is present at least one time in the container, else 0.
    */

    ///Let's see an example with syntax 1.
    map<int, int> mmp;
    mmp.insert(pair<int, int> (1, 40));

    if(mmp.count(1))
    {
        cout << "Key 1 is present" << endl;
    }
    else
    {
        cout << "Key 1 is not present" << endl;
    }

    if(mmp.count(100))
    {
        cout << "Key 100 is present" << endl;
    }
    else
    {
        cout << "Key 100 is not present" << endl;
    }

    /*
    //find() function.
    //Returns an iterator that refer to the position where the key is present.
      If there no such key, then return an iterator that refer map_name.end();
    //It takes "key" as parameter.
    // Syntax :- map_name.find(key);
    */


}
