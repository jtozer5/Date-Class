/*******************************
 * dayType.cpp
 *
 * Implementation file for the dayType class
 *
 * Josh Tozer
 * 2/15/2019
 * Clements/CSC161
*******************************/
#include <iostream>
#include "dayType.h"

void dayType::setDayNum(int dayNum) {
    if (dayNum <= 7 && dayNum > 0) {
        mDayNum = dayNum;
        mDay[mDayNum];
    } else {
            std::cerr << "Invalid day number";
    }
}

void dayType::print() const {
    std::cout << "Today is " << mDay[mDayNum] << ".\n";
}

std::string dayType::today() const {
    return mDay[mDayNum];
}

std::string dayType::tomorrow()  const {
    int n;
    if (mDayNum + 1 > 6) {
        n = 0;
    } else {
        n = mDayNum -1;
    }
    return mDay[n];
}

std::string dayType::yesterday()  const {
    int n;
    if (mDayNum -1 < 0) {
        n = 7;
    } else {
        n = mDayNum - 1;
    }
    return mDay[n];
}

std::string dayType::timeTravel(int daysTravelled) {
    int n;

    if (daysTravelled < 0) {
        std::cerr << "Invalid time travel parameter.  Please enter a"
                    " number greater than 0.\n";

    } else if (daysTravelled > 7) {

        n = mDayNum + (daysTravelled % 7);

    } else {

        n = mDayNum + daysTravelled;
    }

    if (n > 7) {
        n = n - 7;
    }

    mDayNum = n;
    return mDay[mDayNum];
}
