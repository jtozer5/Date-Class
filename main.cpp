/*******************************
 * main.cpp
 *
 * main file for testing
 *
 * Josh Tozer
 * 2/15/2019
 * Clements/CSC161
*******************************/
#include <iostream>
#include "dayType.h"
#include "dateType.h"
#include "extDateType.h"

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
    std::cout << "I time travel 14 days.\n"
            << "Now it is "<< day2.timeTravel(14) << ".\n";
    std::cout << "I time travel 4 days.\n"
            << "Now it is "<< day2.timeTravel(4) << ".\n";
    std::cout << "I time travel 13 days.\n"
            << "Now it is "<< day2.timeTravel(13) << ".\n";

    // invalid input test
    dayType day30(30);

    // Testing date class
    dateType date(2, 20, 2017);
    date.print();
    date.setDate(10, 31, 2017);
    date.print();
    date.setDay(10);
    date.print();
    date.setMonth(12);
    date.print();
    date.setYear(2019);
    date.testLeapYear();
    date.setYear(2016);
    date.testLeapYear();
    date.setYear(2020);
    date.testLeapYear();
    return 0;
}
