#include<iostream>
#include "P-1.h"
using namespace std;

int main()
{
    string input;

    cout << "Input: ";
    cin >> input;

    if (checkNumeric(input))
    {
        cout << "Numeric Constant." << endl; 
    }

    else 
    {
        cout << "Not Numeric." << endl;
    }

    return 0;
}