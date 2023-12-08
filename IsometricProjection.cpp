/*This program calculates the isometric transform from a point with coordinates x1,y1,z1, in 3D space to a point with coodinates x2, y2 in a 2D plane. Reference: https://en.wikipedia.org/wiki/Isometric_projection*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   // Define 3D point cordiantes (x1, y1, z1) and 2D point coordinates (x2, y2) as double.
   double x1, y1, z1, x2, y2;
   //Ask for x1-coordiante.
   cout << "Enter the x coordinate of 3D point ";
   cin >> x1;
   //Ask for y1-coordiante. 
   cout << "Enter the y coordinate of 3D point: ";
   cin >> y1;
   //Ask for z-coordiante.
   cout << "Enter the z coordinate of 3D point: ";
   cin >> z1;
   // Calculate x2
   x2 = x1/sqrt(2) - z1/sqrt(2);
   cout << "The x-cordinates of the isometric transform is " << x2 << "\n";
   // Calculate y2
   y2 = x1/sqrt(6) + 2*y1/sqrt(6) + z1/sqrt(2);
   cout << "The y-cordinates of the isometric transform is " << y2 << "\n";
   return 0;
};
