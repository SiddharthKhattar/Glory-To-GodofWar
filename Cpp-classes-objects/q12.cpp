/* WAP to calculate the average percentage of marks in a particular subject by 
 * n students of a class using static data members.*/
#include <iostream>

using namespace std;

class Student_marks {
    public:
        static float average;
        int marks;
};

float Student_marks::average = 0;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student_marks *marklist = new Student_marks[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marklist[i].marks;
        Student_marks::average += marklist[i].marks;
    }

    Student_marks::average /= n;

    cout << "Average marks: " << Student_marks::average << endl;

    return 0;
}
