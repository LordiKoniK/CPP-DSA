#include <iostream>
using namespace std;


int days = 0;
int seconds = 0; // initialise variables to 0

int main()
{
    cout << "Enter the number of days: ";   // ask user for input 
    cin >> days;

    seconds = days * 24 * 60 * 60;     // x days * 24 hours * 60 minutes * 60 seconds

    cout << days << " days = " << seconds << " seconds" << endl;    // ouput

    return 0;
}
