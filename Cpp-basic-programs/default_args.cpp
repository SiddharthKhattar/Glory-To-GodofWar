/* Program to demonstrate usage of default args to calculate volume of a box */

#include <iostream>

using namespace std;

float volume(float length=10, float breadth=10, float height=10);

float volume(float length, float breadth, float height) {
    return length * breadth * height;
}

int main() {
    float length, breadth, height;

    cout << "Enter length (default 10): ";
    cin >> length;
    cout << "Enter breadth (default 10): ";
    cin >> breadth;
    cout << "Enter height (default 10): ";
    cin >> height;

    cout << "Volume with all default arguments: " << volume() << endl;
    cout << "Volume with only length specified: " << volume(length) << endl;
    cout << "Volume with both length and breadth: " << volume(length, breadth) << endl;
    cout << "Volume with all arguments: " << volume (length, breadth, height) << endl;
    
    return 0;
}
