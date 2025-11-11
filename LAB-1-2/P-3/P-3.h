#include <iostream>
#include <string>
using namespace std;

void checkComment(string line) {
    if (line.length() >= 2 && line[0] == '/' && line[1] == '/') {
        cout << "Single Line Comment." << endl;
        cout << "Commented Text: " << line.substr(2) << endl;
    }
    else if (line.length() >= 4 && line[0] == '/' && line[1] == '*' &&
             line[line.length()-2] == '*' && line[line.length()-1] == '/') {
        cout << "Multiple Line Comment." << endl;
        cout << "Commented Text: " << line.substr(2, line.length()-4) << endl;
    }
    else {
        cout << "Not a Comment." << endl;
    }
}
