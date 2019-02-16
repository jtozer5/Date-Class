/*******************************
 * dayType.h
 *
 * Class definition for the dayType class
 *
 * Josh Tozer
 * 2/15/2019
 * Clements/CSC161
*******************************/
#include <iostream>

class dayType {
private:
     const std::string mDay[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                            "Friday", "Saturday"};
    int mDayNum;
public:
    void setDayNum(int dayNum);
    void print();
    std::string today();
    std::string tomorrow();
    std::string yesterday();
    std::string timeTravel(int daysTravelled);

    dayType() {
        mDayNum = 0;
        mDay[mDayNum];
    }

    dayType(int dayNum) {
        if (dayNum <= 7 && dayNum > 0) {
            mDayNum = dayNum;
            mDay[mDayNum];
        } else {
                std::cerr << "Invalid day number.\n";
        }
    }
};
