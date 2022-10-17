/* WAP to demonstrate the concept of inline member function outside the class */
#include <iostream>

using namespace std;

class Example {
    public:
        int nameset();
        string nameshow();
    private:
        string name;
};

inline int Example::nameset() {
    cout << "Enter name: ";
    getline(cin, name);
    return 0;
}

inline string Example::nameshow() {
    return name;
}

int main() {
    Example user;

    user.nameset();
    cout << "Username entered is: " << user.nameshow() << endl;

    return 0;
}
