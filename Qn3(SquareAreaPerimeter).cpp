#include <iostream>
using namespace std;


int side = 0;
int area = 0;
int perimeter = 0;  // init stuff

int calcArea(int s) {       // using functions this time as instructed
    return s * s;
}

int calcPerimeter(int s) {
    return 4 * s;
}

int main()
{
    cout << "Enter the side length of the square: ";    // input
    cin >> side;            

    area = calcArea(side);           
    perimeter = calcPerimeter(side);       // calling functions with user's input variable

    cout << "The area of the square is " << area << endl;
    cout << "The perimeter of the square is " << perimeter << endl;     // output

    return 0;
}