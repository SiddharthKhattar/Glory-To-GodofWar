/* Program to check if a string is a palindrome or not: */
#include <iostream>

using namespace std;

int check_palindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] != str[n-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;
    
    if (check_palindrome(str)) {
        cout << "String is palindrome." << endl;
    } else {
        cout << "String is not palindrome." << endl;
    }

    return 0;
}
