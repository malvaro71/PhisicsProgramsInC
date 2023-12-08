/*This program calculates the cross product of two given vectors V1 and V2.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define vector cordiantes of V1 <x1, y1, z1> and V2 <x2, y2, z2> and resultant vector <x3, y3, z3>.
    double x1, y1, z1, x2, y2, z2, x3, y3, z3;
	cout << "This program calculates the cross product of two given vectors V1 and V2.";
    //Ask for x1 coordinate of vector V1.
    cout << "Enter the x1 coordinate of vector V1: ";
    cin >> x1;
    //Ask for y1 coordinate of vector V1. 
    cout << "Enter the y1 coordinate of vector V1: ";
    cin >> y1;
	//Ask for z1 coordinate of vector V1. 
    cout << "Enter the z1 coordinate of vector V1: ";
    cin >> z1;
    //Ask for x2 coordinate of vector v2.
    cout << "Enter the x2 coordinate of vector v2: ";
    cin >> x2;
    //Ask for y2 coordinate of vector V2. 
    cout << "Enter the y2 coordinate of vector V2: ";
    cin >> y2;
	//Ask for z2 coordinate of vector V2. 
    cout << "Enter the z2 coordinate of vector V2: ";
    cin >> z2;
    //Calculate <x3, y3, z3> coordinates of resultant vector.
    x3 = y1*z2 - z1*y2;
	y3 = z1*x2 - x1*z2;
	z3 = x1*y2 - y1*x2;
    
    cout << "The resultant vector cordinates are <" << x3 << "," << y3 << "," << z3 << ">\n";
    return 0;
}
