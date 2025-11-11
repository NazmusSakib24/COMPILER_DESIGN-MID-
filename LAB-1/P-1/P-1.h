#include<iostream>
using namespace std;

bool checkNumeric(string str)
{
    if (str.length() == 0)
    {
        return false;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return false;
        }
    }

    return true;
}