#include <iostream>
using namespace std;

bool checkIdentifier(string str)
{
    if (str.length() == 0)
        return false;

    if (!((str[0] >= 'A' && str[0] <= 'Z') || 
          (str[0] >= 'a' && str[0] <= 'z') || 
          (str[0] == '_')))
        return false;

    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              (str[i] == '_')))
            return false;
    }

    return true;
}
