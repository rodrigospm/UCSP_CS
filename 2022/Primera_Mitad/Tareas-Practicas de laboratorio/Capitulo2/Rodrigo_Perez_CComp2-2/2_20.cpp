/* (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of a circle 
as an integer and prints the circle's diameter, circumference and area. 
Use the constant value 3.14159 for h. Do all calculations in output statements. 
[Note: In this chapter, we've discussed only integer constants and variables. 
In Chapter 4 we discuss floating-point numbers, i.e., values that have decimal points.] */

#include <iostream>
using namespace std;

int main() {
    int radius;
    int diameter;
    int circumference;
    int area;
    int pi=3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2*radius;
    cout << "Diameter is: " << diameter << endl;

    circumference = pi*diameter;
    cout << "Circumference is: " << diameter << endl;    

    area = pi*radius*radius;
    cout << "Area is: " << area;

    return 0;
}