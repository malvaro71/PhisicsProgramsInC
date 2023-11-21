/*This program calculates point coordinates to draw a vector or arrow in svg.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define vector cordiantes (x, y) and vector module and orientation as double.
    double x1, y1, x2, y2, x3, y3, x4, y4, headlength, angle;
    // Define headlength
    headlength = 3;
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
    //Calculate vector orientation.
    angle = atan2(y2-y1, x2-x1) * 180 / M_PI;
    //Calculate x and y coordinates of first partial arrowhead extreme
    x3 = x2 + headlength * cos(angle + 220 * M_PI / 180);
    y3 = y2 + headlength * sin(angle + 220 * M_PI / 180);
    cout << "The first arrowhead extreme cordinates are (" << x3 << "," << y3 << ")";
    //Calculate x and y coordinates of second partial arrowhead extreme
    x4 = x2 + headlength * cos(angle + 140 * M_PI / 180);
    y4 = x2 + headlength * sin(angle + 140 * M_PI / 180);
    cout << "The second arrowhead extreme cordinates are (" << x4 << "," << y4 << ")";
    return 0;
}
