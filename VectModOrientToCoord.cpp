/*This program calculates vector coordiantes x and y, given its module and orientation.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define vector cordiantes (x, y) and vector module and orientation as double.
    double x, y, module, orientation;
    //Ask for vector module.
    cout << "Enter the vector module: ";
    cin >> module;
    //Ask for vector orientarion in degrees. 
    cout << "Enter the vector orientation in degrees: ";
    cin >> orientation;
	//convert orientation to radianas.
	orientation = orientation*M_PI/180;
    //Calculate and display vector coordinte x.
    x = module * cos(orientation);
    cout << "The vector x-coordinate is: " << x << endl;
    //Calculate and display vector coordinte y.
    y = module * sin(orientation);
    cout << "The vector y-coordinate is: " << y << endl;
    return 0;
}