/* WAP to add two time objects where the data members are hours, minutes, 
 * seconds. Make use of validation check while entering the time. */
#include <iostream>

using namespace std;

class Time {
    public:
        int hour;
        int min;
        int sec;
        void validity_check();
        void add_time (Time time1, Time time2);
        Time() {
            hour = 0;
            min = 0;
            sec = 0;
        }
};

void Time::validity_check() {
    if (sec > 59) {
        min += sec / 60;
        sec = sec % 60;
    }
    if (min > 59) {
        hour += min / 60;
        min = min % 60;
    }
}


void Time::add_time (Time time1, Time time2) {
    sec = time1.sec + time2.sec;
    min = time1.min + time2.min;
    hour = time1.hour + time2.hour;
    validity_check();
}

int main() {
    Time t1, t2, t3;

    cout << "Enter details of time object 1 : " << endl;
    cout << "Seconds: \t";
    cin >> t1.sec;
    cout << "Minutes: \t";
    cin >> t1.min;
    cout << "Hours: \t\t";
    cin >> t1.hour;

    cout << "Enter details of time object 2 : " << endl;
    cout << "Seconds: \t";
    cin >> t2.sec;
    cout << "Minutes: \t";
    cin >> t2.min;
    cout << "Hours: \t\t";
    cin >> t2.hour;

    t1.validity_check();
    t2.validity_check();

    cout << "Time 1: \t" << t1.hour << "h " << t1.min << "m " << t1.sec << "s ";
    cout << endl;
    cout << "Time 2: \t" << t2.hour << "h " << t2.min << "m " << t2.sec << "s ";
    cout << endl;

    t3.add_time(t1,t2);
    cout << "Addition : \t" << t3.hour << "h " << t3.min << "m " << t3.sec << "s ";
    cout << endl;

    return 0;
}