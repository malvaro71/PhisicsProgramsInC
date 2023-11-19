/*This program calculates vector module and orientation, given
vector coordiantes x and y.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define vector cordiantes (x, y) and vector module and orientation as double. from git
    double x, y, module, orientation;
    //Ask for x-coordiante.
    cout << "Enter the x coordinate: ";
    cin >> x;
    //Ask for y-coordiante. 
    cout << "Enter the y coordinate: ";
    cin >> y;
    //Calculate module and display vector module.
    module = sqrt(x * x + y * y);
    cout << "The module of the vector is: " << module << endl;
    //Calculate and display vector orientation.
    orientation = atan2(y, x) * 180 / M_PI;
    cout << "The orientation of the vector is: " << orientation << " degrees" << endl;
    return 0;
}
