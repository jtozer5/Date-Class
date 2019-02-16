#include <iostream>
#include "dayType.h"

int main() {
    // Testing the day class
    dayType day;
    day.print();
    day.setDayNum(1);
    day.print();
    day.setDayNum(6);
    day.print();
    std::cout << "Today is " << day.today() << ".\n";
    std::cout << "Tomorrow is " << day.tomorrow() << ".\n";
    std::cout << "Yesterday was " << day.yesterday() << ".\n";

    dayType day2(2);
    day2.print();
    // invalid input test
    dayType day30(30);

    return 0;
}
