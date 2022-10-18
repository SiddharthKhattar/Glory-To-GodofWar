/* Program to calculate area and perimeter of a circle by making function that
 * returns more than one value */
#include <iostream>
#define PI 3.14

using namespace std;

int area_perimeter (float radius, float& perimeter, float& area);

int area_perimeter (float radius, float& perimeter, float& area) {
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    return 0;
}

int main() {
    float radius, perimeter, area;

    cout << "Enter radius of circle: ";
    cin >> radius;
    area_perimeter (radius, perimeter, area);
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    return 0;
}
