/*******************************
 * extDateType.h
 *
 * Definition for extDateType class
 *
 * Josh Tozer
 * 2/15/2019
 * Clements/CSC161
*******************************/
#ifndef H_extDateType
#define H_extDateType
#include <iostream>
#include "dateType.h"

class extDateType: private dateType {
private:

    const std::string mExtMonth[12] = {

        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

public:

    void printMonthYear() const;
};

#endif
