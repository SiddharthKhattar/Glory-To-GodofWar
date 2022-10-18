/* WAP to calculate the roots of a quadratic equation by demonstrating the
 * concept of data hiding, encapsulation, and abstraction. */
#include <iostream>
#include <cmath>

using namespace std;

class Quadratic {
    int a, b, c;
    public:
        float root1_real, root2_real, root1_imaginary, root2_imaginary;
        int set_coefficients(int a, int b, int c);
        void calculate_roots();
};

int Quadratic::set_coefficients(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
    return 0;
}

void Quadratic::calculate_roots() {
    float discriminant;

    discriminant = b*b - 4 * a * c;

    if (discriminant > 0) {
        root1_real = (-b + sqrt(discriminant))/2*a;
        root2_real = (-b - sqrt(discriminant))/2*a;
        cout << "This quadratic equation has two roots: " << endl;
        cout << "Root 1 : " << root1_real << endl;
        cout << "Root 2 : " << root2_real << endl;
    } else if (discriminant == 0) {
        root1_real = (-b/2*a);
        cout << "This quadratic equation has only one root: " << endl;
        cout << "Root : " << root1_real << endl;
    } else {
        root1_imaginary = sqrt(-discriminant)/2*a;
        root1_real = -b/2*a;
        cout << "This quadratic equation has imaginary roots: " << endl;
        cout << "Root 1 : " << root1_real << " + " << root1_imaginary << "i" << \
            endl;
        cout << "Root 2 : " << root1_real << " - " << root1_imaginary << "i" << \
            endl;
    }
}

int main() {
    float a, b, c;
    Quadratic eqn;

    cout << "Enter the coefficents a, b, and c: ";
    cin >> a >> b >> c;
    eqn.set_coefficients(a, b, c);
    eqn.calculate_roots();

    return 0;
}
