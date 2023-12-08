/*This program Convert from 3D coordinates to 2D oblique projection coordinates for and svg drawing
. Reference: https://en.wikipedia.org/wiki/Oblique_projection */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   // Define 3D point cordiantes (x1, y1, z1) and 2D point coordinates (x2, y2) as double.
   double x1, y1, z1, x2, y2;
   //SVG viewport size is 400*400.
   const int svgWidth = 400;
   const int svgHeight = 400;
   // 3D z-coordinate is parallel to svg Canva y-coordinate but has opposite orientation.
   // 3D y-coordinate is parallel to svg Canva x-coordinate and have same orientation. 
   // 3D x-axis is skewed 45 degrees and is oriented toward the svg Canva
   const double skewedAngle = 45*M_PI/180; //expressed in radians.
   // SVG canva coordinates of 3D origin (0, 0, 0) 
   const double Ox = svgWidth*sin(skewedAngle)/2;
   const double Oy = svgHeight*(1 - cos(skewedAngle)/2);
   //Ask for x-coordinate.
   cout << "Enter the x coordinate of 3D point: ";
   cin >> x1;
   //Ask for y-coordiante. 
   cout << "Enter the y coordinate of 3D point: ";
   cin >> y1;
   //Ask for z-coordiante.
   cout << "Enter the z coordinate of 3D point: ";
   cin >> z1;
   // Calculate x2
   x2 = Ox + y1 - x1*cos(skewedAngle);
   cout << "The x-cordinates of the oblique projection is " << x2 << "\n";
   // Calculate y2
   y2 = Oy - z1 + x1*cos(skewedAngle);
   cout << "The y-cordinates of the oblique projection is " << y2 << "\n";
   return 0;
};
