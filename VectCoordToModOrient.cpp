#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, module, orientation;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;
    module = sqrt(x * x + y * y);
    orientation = atan2(y, x) * 180 / M_PI;
    cout << "The module of the vector is: " << module << endl;
    cout << "The orientation of the vector is: " << orientation << " degrees" << endl;
    return 0;
}
