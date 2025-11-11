#include <iostream>
#include <string>
#include "P-3.h"
using namespace std;

int main() {
    string input;
    cout << "Input: ";
    getline(cin, input);

    checkComment(input);

    return 0;
}
