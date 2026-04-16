#include <iostream>
#include <cmath>
using namespace std;


int radius = 0;
double volume = 0.0; // initialise variables
double pi = 3.14159265358979323846; // define pi now to make things cleaner

int main()
{
    cout << "Enter the radius to use: ";   // input radius 
    cin >> radius;

    volume = (4/3) * pi * pow(radius, 3);     // volume of a sphere = (4/3) * pi * r^3

    // NB: I am presuming when you told us to use the inbuilt "exponential" function of C++, you were referring to pow() 
    // and not the actual exp() since exp gives you e^x using the mathematical constant e, which really wouldn't make sense here

    cout << "The volume of a sphere with radius " << radius << " is " << volume << endl;    // ouput result

    return 0;
}