#include <stdio.h>

void main() {
    enum week_day {Monday, Tuesday, Wednesday=0, Thursday, Friday};
    enum week_day day;
    enum week_day day2;
    day = Monday;
    day2 = Wednesday;
    printf("Monday: %d\n", day);
    printf("Wednesday: %d\n", day2);
}

