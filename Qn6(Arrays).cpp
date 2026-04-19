#include <iostream>
using namespace std;


int userarray[5];       // create an array of 5 numbers
double avg = 0.0;       // variable to hold the average


int main()
{
    cout << "Enter 5 numbers: " << endl;   
    for(int i = 0; i < 5; i++) {            // for loop to iteratively enter the numbers
        cin >> userarray[i];                 
    }

    for(int i = 0; i < 5; i++) {            // add the array numbers together
        avg = avg + userarray[i];           
    }

    avg = avg / 5.0;                       // divide by amount (5) to get the actual average

    cout << "The average of your numbers is: " << avg << endl;   // output

    return 0;   
}