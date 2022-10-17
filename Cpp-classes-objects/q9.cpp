/* WAP to transfer money from one account (acct1) to another account (acct2)
 * Class: acc_info
 * Data members: acctno, balance
 * Public member functions: read(), show(), transfermoney() */

#include <iostream>

using namespace std;

class Acc_info {
    int acctno;
    float balance;
    public:
        Acc_info(int acctno, float balance) : acctno(acctno), balance(balance){;}
        float read();
        void show();
        float transfermoney(float amount, Acc_info& receiver);
};

inline float Acc_info::read() {
    return balance;
}

void Acc_info::show() {
    cout << "Account balance for account number " << acctno << " is: " << \
        read() << endl;
}

float Acc_info::transfermoney(float amount, Acc_info& receiver) {
    if (balance < amount) {
        cout << "Error: insufficient funds" << endl;
        return 0;
    }
    balance -= amount;
    receiver.balance += amount;
    cout << "Success: " << amount << " transferred from " << acctno << \
        " to " << receiver.acctno << endl;
    return amount;
}

int main() {
    Acc_info acc1(12345, 15000), acc2(54321, 5000);
    float amount;

    cout << "====== Pre transaction ======" << endl;
    acc1.show();
    acc2.show();
    
    cout << endl;
    cout << "Enter amount of money to be transferred: ";
    cin >> amount;

    acc1.transfermoney(amount, acc2);

    cout <<endl;
    cout << "====== Post transaction ======" << endl;
    acc1.show();
    acc2.show();
    return 0;
}
