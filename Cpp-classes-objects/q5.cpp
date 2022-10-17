/* WAP to calculate gross salary of an employee by demonstrating the concept of
 * nesting of member functions */
#include <iostream>

using namespace std;

class Employee {
    public:
        float basic, hra, dearness, gross;
        int enter_salary();
        float gross_salary();
};

int Employee::enter_salary() {
    cout << "Enter basic salary: ";
    cin >> basic;
    cout << "Enter HRA: ";
    cin >> hra;
    cout << "Enter dearness allowance: ";
    cin >> dearness;
    return 0;
}

float Employee::gross_salary() {
    enter_salary();
    gross = basic + hra + dearness;
    return gross;
}

int main() {
    Employee emp;
    emp.gross_salary();
    cout << "-------------------------------------------" << endl;
    cout << "Gross salary of employee: " << emp.gross <<endl;
    return 0;
}
