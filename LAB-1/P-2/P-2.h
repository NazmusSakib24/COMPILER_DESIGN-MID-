#include <iostream>
using namespace std ;

bool checkOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=')
    {
        return true ;
    }

    else 
    {
        return false;
    }
}