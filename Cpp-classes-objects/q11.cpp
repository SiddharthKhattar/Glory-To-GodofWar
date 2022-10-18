/* WAP to add two-time objects represented in hours and minutes and return the
 * resultant time object from the function. */
#include <iostream>

using namespace std;

class Time {
    public:
        int hours;
        int mins;
        void validity_check();
        Time() {
            hours = 0;
            mins = 0;
        }
};

void Time::validity_check() {
    if (mins > 59) {
        hours += mins / 60;
        mins = mins % 60;
    }
}

Time time_add(Time t1, Time t2) {
    Time t3;

    t3.hours = t1.hours + t2.hours;
    t3.mins = t1.mins + t2.mins;
    t3.validity_check();

    return t3;
}

int main() {
    Time t1, t2, sum;
    
    cout << "Time object 1:" << endl;
    cout <<"Hours: ";
    cin >> t1.hours;
    cout << "Minutes: ";
    cin >> t1.mins;
    t1.validity_check();

    cout << "Time object 2:" << endl;
    cout <<"Hours: ";
    cin >> t2.hours;
    cout << "Minutes: ";
    cin >> t2.mins;
    t2.validity_check();

    sum = time_add(t1, t2);

    cout << "Time 1: \t" << t1.hours << "h " << t1.mins << "m" <<endl;
    cout << "Time 2: \t" << t2.hours << "h " << t2.mins << "m" <<endl;
    cout << "-------------------------------------" << endl;
    cout << "Sum: \t\t" << sum.hours << "h " << sum.mins << "m" <<endl;

    return 0;
}