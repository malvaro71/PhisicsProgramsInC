/*This program calculates point coordinates to draw a vector or arrow in svg.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define vector cordiantes (x, y) and vector module and orientation as double.
    double x1, y1, x2, y2, module, orientation;
    //Ask for x-coordiante of vector origin.
    cout << "Enter the x coordinate for vector origin: ";
    cin >> x1;
    //Ask for y-coordiante of vector origin. 
    cout << "Enter the y coordinate for vector origin: ";
    cin >> y1;
    //Ask for x-coordiante of vector end.
    cout << "Enter the x coordinate for vector end: ";
    cin >> x2;
    //Ask for y-coordiante of vector end. 
    cout << "Enter the y coordinate for vector end: ";
    cin >> y2;
    //Calculate module and display vector module.
    module = sqrt(x * x + y * y);
    cout << "The module of the vector is: " << module << endl;
    //Calculate and display vector orientation.
    orientation = atan2(y, x) * 180 / M_PI;
    cout << "The orientation of the vector is: " << orientation << " degrees" << endl;
    return 0;
}
