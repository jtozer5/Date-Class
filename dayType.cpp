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

void dayType::print() {
    std::cout << "Today is " << mDay[mDayNum] << ".\n";
}

std::string dayType::today() {
    return mDay[mDayNum];
}

std::string dayType::tomorrow() {
    int n;
    if (mDayNum + 1 > 6) {
        n = 0;
    } else {
        n = mDayNum -1;
    }
    return mDay[n];
}

std::string dayType::yesterday() {
    int n;
    if (mDayNum -1 < 0) {
        n = 7;
    } else {
        n = mDayNum - 1;
    }
    return mDay[n];
}

std::string timeTravel(int daysTravelled) {

}
