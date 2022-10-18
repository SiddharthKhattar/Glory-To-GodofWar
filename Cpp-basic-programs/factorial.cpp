/* Program to find factorial of a number using recursion. */

#include <iostream>

using namespace std;

int factorial(int num) {
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num;
    
    cout << "Enter number to find its factorial: ";
    cin >> num;
    cout << "Factorial : " << factorial(num) << endl;

    return 0;
}
