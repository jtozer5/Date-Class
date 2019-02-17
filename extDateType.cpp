/*******************************
 * extDateType.cpp
 *
 * Imp for dateType class
 *
 * Josh Tozer
 * 2/15/2019
 * Clements/CSC161
*******************************/
#include <iostream>
#include "extDateType.h"
#include "dateType.h"

void extDateType::printMonthYear() const {

    std::cout << mExtMonth[getMonth() - 1] << " " << getYear();
}
