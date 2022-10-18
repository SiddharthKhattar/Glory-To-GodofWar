/* WAP to demonstrate function of const member function and const object */

#include <iostream>

using namespace std;

class User {
    string username;
    public:

        // this function does not change any data members, so it is const.
        string get_username() const;

        // on the other hand, this function will change a data member, so it 
        // will not be marked as const:
        string change_username(string name); 

        User(string name) : username(name) {
            ;
        }
};

string User::get_username() const {
    return username;
}

string User::change_username(string name) {
    username = name;
    return username;
}

int main() {
    string newname;

    // this is a const object, it can only be set once, and cannot be 
    // changed later. These objects can only use const functions.
    const User admin("admin");

    // this is not a const object, it's data members can be changed as many 
    // times as needed.
    User guest("yours-truly");

    cout << "Admin's username: " << admin.get_username() << endl;
    cout << "Guest's username: " << guest.get_username() << endl;
    cout << "Enter new username for guest: ";
    cin >> newname;
    cout << "New username for Guest: " << guest.change_username(newname) <<endl;
    return 0;
}

