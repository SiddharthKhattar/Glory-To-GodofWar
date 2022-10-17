/* WAP to calculate the area of a circle by defining member function outside the 
 * class (using scope resolution operator */
#include <iostream>
#define PI 3.14

using namespace std;

class Circle {
    public:
        float radius;
        float area_calc();
};

float Circle::area_calc() {
    return PI * radius * radius;
}

int main() {
    Circle c;

    cout << "Enter radius of circle: ";
    cin >> c.radius;
    cout << "Area of circle: " << c.area_calc() << " sq. units" << endl;

    return 0;
}
