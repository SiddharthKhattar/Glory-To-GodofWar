/* WAP to demonstrate the concept of function overloading. Make a menu-driven
 * program using while loop and a switch case within it. */
#include <iostream>
#define PI 3.14

using namespace std;

float area(float radius) {
    return PI * radius * radius;
}

float area(float length, float breadth) {
    return length * breadth;
}

float area(float length, float breadth, float height) {
    return 2*(length * breadth + breadth * height + height * length);
}

int main() {
    int choice, running = 1;
    float radius, length, breadth, height;

    while (running) {
        cout << "======== Pick an option ========" << endl;
        cout << "\t1. Area of circle." << endl;
        cout << "\t2. Area of rectangle." << endl;
        cout << "\t3. Area of cuboid." << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << "--------------" << endl;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                cout << "Area : " << area(radius) << endl;
                break;
            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter breadth: ";
                cin >> breadth;
                cout << "Area : " << area(length, breadth) << endl;
                break;
            case 3:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter breadth: ";
                cin >> breadth;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area : " << area(length, breadth, height) << endl;
                break;
            default:
                running = 0;
                cout << "Invalid option. Exiting..." << endl;
                break;
        }
    }
    return 0;
}
