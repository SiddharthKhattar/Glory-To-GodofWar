/* Program to calculate area of a circle using inline function */
#include <iostream>
#define PI 3.14

using namespace std;

inline float area_circle(float radius);

inline float area_circle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area : " << area_circle (radius) << " sq. units" << endl;

    return 0;
}
