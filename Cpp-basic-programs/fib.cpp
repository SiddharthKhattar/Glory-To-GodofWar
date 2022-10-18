/* Program to calculate fibonacci sequence using recursion */

#include <iostream>

using namespace std;

int fib(int num) {
    if (num == 0 || num == 1)
        return num;
    else
        return fib(num - 1) + fib (num - 2);
}

int main() {
    int num;

    cout << "How many fibonacci numbers to print?: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        cout << fib(i);
        i == num - 1 ? cout << endl : cout << ", ";
    }
    return 0;
}
