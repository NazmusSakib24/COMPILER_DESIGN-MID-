#include<iostream>
#include "P-2.h"
using namespace std;

int main()
{
    string input;
    cout << "Input: ";
    cin >> input;

    int operatorCount = 0;

  
    for (int i = 0; i < input.length(); i++)
    {
        if (checkOperator(input[i]))
        {
            operatorCount++;
            cout << "Operator" << operatorCount << " : " << input[i] << endl;
        }
    }

    if (operatorCount == 0)
    {
        cout << "No operator found." << endl;
    }

    return 0;
}
