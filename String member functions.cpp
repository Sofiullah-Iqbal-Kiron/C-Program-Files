#include <iostream>
#include <string> //For access public member functions of string class.
using namespace std;

int main()
{
    string s1 = "Sofiullah Iqbal Kiron",
           s2 = "I am a normal student of CSE",
           s3, s4,
           s5 = "sAAA";

    /*
        ->substr() is a public member function of string class declared in std :: string :: substr().
        ->Syntax: substr(start_pos, length);
    */
    s3 = s1.substr(10, 5);
    cout << s3 << endl
         << s1.substr(16, 5) << endl;

    /*
        ->find() will return the starting position of the input string.
        ->size_t is the alias of one of the unsigned integer types.
        It is a type that is able to return the size of an object in bytes.
        This is the type returned by the sizeof operator.
    */
    size_t pos = s1.find("Kiron");
    cout << pos << endl;

    /*
        pos gives the starting index and length as same.
        pos starting is 16 and length is also 16.
    */
    s4 = s2.substr(pos);
    cout << s4 << endl;

    /*
        Starts from 3 and over when the main string ends.
    */
    s4 = s2.substr(3);
    cout << s4 << endl;

    cout << s5.find('A') << endl;
}
