#include<iostream>
#include "P-7.h"
using namespace std;

int main()
{
    string firstName, lastName;
    cout<< "Enter first name: ";
    getline (cin, firstName);
    cout<< "Enter last name: ";
    getline(cin, lastName);

    string fullName = getFullName(firstName, lastName);
    cout << "Full name = " << fullName << endl;

    return 0;
}