/* Program to find volume of cone, sphere, cylinder using function overloading */

#include <iostream>
#define PI 3.14

using namespace std;

float volume(float radius) {
    // function to find volume of sphere
    return 4.0/3.0 * PI * radius * radius * radius;
}

float volume(float radius, float height) {
    //fnction to find volume of cylinder
    return PI * radius * radius * height;
}

float volume(float radius, int height) {
    //function to find volume of cone
    // NOTE : height is int to satisfy function overloading conditions
    return 1.0/3.0 * PI * radius * radius * height;
}

int main() {
    float radius, height;
    int height_int;

    cout << "===== INPUTS =====" << endl;
    cout << "Enter radius for sphere, cylinder, cone: ";
    cin >> radius;

    cout << "Enter height for cylinder, cone: ";
    cin >> height;
    height_int = (int) height;

    cout << "===== VOLUME =====" << endl;
    cout << "Sphere: \t" << volume (radius) << " cube units" << endl;
    cout << "Cylinder: \t" << volume (radius, height) << " cube units" << endl;
    cout << "Cone: \t\t" << volume (radius, height_int) << " cube units" << endl;

    return 0;
}
