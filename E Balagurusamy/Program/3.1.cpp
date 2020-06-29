#include<iostream>
using namespace std;

int m = 10; 	// Global variable m.

int main()
{
	int m = 20;
	{
	    int k = m;
	    int m = 30;

	    cout << "We are in inner block";
	    cout << "::m " << ::m << endl;
	}
}
