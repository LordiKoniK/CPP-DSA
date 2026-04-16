#include <iostream>
using namespace std;


    // BEGIN

double x = 0.0;      // 2/y will be a fractional value, so we have to make everything doubles
double y = 20.0;     // SET x TO 0, y TO 20  


int main()
{
   while(y >= 6.0) {    // REPEAT UNTIL y IS LESS THAN 6
    y = y - 4.0;        // SUBTRACT 4 FROM y
    x = x + 2.0/y;      // ADD 2/y TO x
   }

    cout << "x = " << x << endl;    // DISPLAY x

    return 0;   // END
}