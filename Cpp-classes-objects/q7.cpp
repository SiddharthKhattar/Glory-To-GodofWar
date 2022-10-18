/* WAP to create an array of 5 employees. Input employee id, name, total salary
 * for 5 employees. Display the details of employee with minimum salary and 
 * maximum salary. */
#include <iostream>

using namespace std;

class Employee {
    public:
        int emp_id;
        string name;
        float salary;
        void fill_data();
};

void Employee::fill_data() {
    cout << "Enter employee ID: ";
    cin >> emp_id;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee salary: ";
    cin >> salary;
}

int max_salary(Employee * emparray, int size, int& maxindex) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            max = emparray[i].salary;
        }

        if (emparray[i].salary > max) {
            maxindex = i;
            max = emparray[i].salary;
        }
    }
    return 0;
}

int min_salary(Employee * emparray, int size, int& minindex) {
    int min = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            min = emparray[i].salary;
        }
        if (emparray[i].salary < min) {
            min = emparray[i].salary;
            minindex = i;
        }
    }
    return 0;
}

int main() {
    int minindex, maxindex;
    Employee emplist[5];

    for (int i = 0; i < 5; i++) {
        emplist[i].fill_data();
    }

    max_salary(emplist, 5, maxindex);
    min_salary(emplist, 5, minindex);

    cout << endl;
    cout << "Employee with maximum salary:" << endl;
    cout << "EmpID: " << emplist[maxindex].emp_id << endl;
    cout << "Name: " << emplist[maxindex].name << endl;
    cout << "Salary: " << emplist[maxindex].salary << endl << endl;

    cout << "Employee with minimum salary:" << endl;
    cout << "EmpID: " << emplist[minindex].emp_id << endl;
    cout << "Name: " << emplist[minindex].name << endl;
    cout << "Salary: " << emplist[minindex].salary << endl;
    return 0;
}