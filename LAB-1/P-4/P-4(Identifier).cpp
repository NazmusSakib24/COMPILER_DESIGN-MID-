#include<iostream>
#include "P-4.h"

using namespace std;

int main()
{
    string input ;
    cout << "Input: ";
    cin >> input ;

    if (checkIdentifier(input))
    {
        cout << "Valid Identifier." << endl;
    }

    else 
    {
        cout << "Not valid Identifier.";
    }
    return 0; 
}