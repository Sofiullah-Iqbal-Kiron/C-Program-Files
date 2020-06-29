#include<iostream>
using namespace std;

class car
{
public: /// Access Specifier
    string brand, model; /// Creating sting variable with cars brand and model
    int develop_year; // Also creating integer variable of cars development year whats will inputed by user of my HOTOVAGA SOFT. Company
};

main()
{
    car c1, c2; /// Created 2 object at car class
    cout << "Enter your car brand name:- "; cin >> c1.brand;
    cout << "Enter its model NO. :- "; cin >> c1.model;
    cout << "And also its development year:- "; cin >> c1.develop_year;

    cout << "\nEnter you wifes car brand name\"(Caution: - Girls are dangerous)\":- "; cin >> c2.brand;
    cout << "Now enter its model No. :- "; cin >> c2.model;
    cout << "Development year of your Queens car:- "; cin >> c2.develop_year;

    cout << "\nIf you exchange your cars with yours wife, your car model will be " << c2.model << " of " << c2.brand << " brand what developed was in the year " << c2.develop_year << "." << endl;
    cout << "Your wifes get VANGACHURA car namely " << c1.brand << "s of " << c1.model << " what was developed in the year " << c1.develop_year << "." << endl;
    cout << "\n\nIt was developed at 27 September, 2019.\nAt the Time of 11:37 PM\nLATE NIGHT PROGRAMMING." << endl;
}
