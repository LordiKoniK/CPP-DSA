#include <iostream>
using namespace std;


char userLetter = ' '; // initialise empty character variable

bool isUppercase(char c) {     
    if (c >= 'A' && c <= 'Z') {     // check if it's within uppercase ASCII range, if not then it should be lower
        return true;
    } else {
        return false;
    }
}

bool isLowercase(char c) {
    if (c >= 'a' && c <= 'z') {     // double check with lowercase range just to be sure (e.g. in case of special characters like #)
        return true;
    } else {
        return false;
    }
}

int main()
{
    cout << "Enter a letter: ";   // get user input 
    cin >> userLetter;

    if (isUppercase(userLetter)) {                          // check if upper
        cout << userLetter << " is uppercase." << endl;

    } else if (isLowercase(userLetter)) {                   // if not upper, then check if lower
        cout << userLetter << " is lowercase." << endl;

    } else {                                                   // if both miss, then it's not a letter
        cout << userLetter << " is not a letter." << endl;     
    }

    return 0;
}
