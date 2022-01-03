#include <iostream>
using namespace std;

//For access map
#include <map>

/*
    ->Map is a associative container which has two part
     in each element. One key, another value associated with it.
    ->The key means first part of map must be unique.
    ->Map store elements in a mapped fashion.
    ->Declaration:- map<key_type, value_type> map_name;
*/

int main()
{
    //Declare a map variable named m.
    map<int, int> m;

    cout << m.size() << endl   //Initially maps size is 0.
         << m.empty() << endl; //Returns true cause the map is empty.

    //Let's insert pair of elements, randomly.
    /*
        insert() is a member function of map for inserting pairs to the map.
    */
    m.insert(pair<int, int>(1, 10)); //We can insert as this,
    /*m.insert({2, 20}); //Or we can insert as this.
                            but only available on C++11.
    */

    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(7, 40));

    //Needs a iterator for iterate over the map.
    map<int, int>::iterator it;

    m[7]+=7;

    cout << "Key" << '\t' << "Value" << endl;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << '\t' << it->second << endl; //First means key, second value.
    }

    /*
        ->count() member function.
        ->Syntax: count(key);
        ->Will return 1 if the key is present in the map otherwise 0.
         count specially returns the number how many times the passed parameter
         value occures in the STL but the map only contains unique key.
         So that, it will return only 1 otherwise 0.
    */

    cout << "Number of times 2 occures in the map m: " << m.count(2) << endl;
    if (m.count(100))
    {
        cout << "100 is present" << endl;
    }
    else
    {
        cout << "No, 100 is not present." << endl;
    }

    /*
        begin()
        Returns an iterator to the first element of the map.
    */
    it = m.begin();
    it++; //Front up the iterator by one.
    cout << it->first << endl
         << it->second << endl;
    it++; //Front up the iterator by one again.
    cout << it->first << endl
         << it->second << endl;

    /*
        end() returns the last element.
    */
    it = m.end();
    cout << it->first << " " << it->second << endl;

    //clear() will removes all the element from the map.
    m.clear();
    cout << !(m.empty()) << endl
         << !(3) << endl; //'!' is also used for reverse the value only at true and false.
    cout << !0 << endl;

    /*
        Now, if we want to access the map elements...
    */
    it = m.begin();
    cout << it->first << " " << it->second << endl; //Returns 0 as key and 1 as value.
    it++;
    cout << it->first << " " << it->second << endl;
}
