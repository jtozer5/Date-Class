/*******************************
 * dateType.cpp
 *
 * Implementation file for the dateType class
 *
 * Josh Tozer
 * 2/15/2019
 * Clements/CSC161
*******************************/#include <iostream>
#include "dateType.h"

void dateType::setDate(int month, int day, int year) {

    if (month > 0 && month <= 12) {

        mMonth = month;
    } else {

        std::cerr << "Invalid month number.\n";
    }

    if (day > 0) {

        if (month == 2 && isLeapYear == false) {

            if (day <= 28) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (month == 2 && isLeapYear == true) {

            if (day <= 29) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }

        } else if (month <= 7 && month % 2 != 0) {

            if (day <= 31) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (month <= 7 && month % 2 == 0) {

            if (day <= 30) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (month >= 8 && month % 2 == 0) {

            if (day <= 31) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (month >= 8 && month % 2 != 0) {

            if (day <= 30) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        }
    }
    if (year > 0) {

        mYear = year;
    } else {

        std::cerr << "Invalid year number.\n";
    }
}

void dateType::setDay(int day) {

    if (day > 0) {

        if (mMonth == 2 && isLeapYear == false) {

            if (day <= 28) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (mMonth == 2 && isLeapYear == true) {

            if (day <= 29) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }

        } else if (mMonth <= 7 && mMonth % 2 != 0) {

            if (day <= 31) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (mMonth <= 7 && mMonth % 2 == 0) {

            if (day <= 30) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (mMonth >= 8 && mMonth % 2 == 0) {

            if (day <= 31) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        } else if (mMonth >= 8 && mMonth % 2 != 0) {

            if (day <= 30) {

                mDay = day;
            } else {

                std::cerr << "Invalid day number.\n";
            }
        }
    }
}

void dateType::setMonth(int month) {

    if (month > 0 && month <= 12) {

        mMonth = month;
    } else {

        std::cerr << "Invalid month number.\n";
    }
}

void dateType::setYear(int year) {

    if (year > 0) {

        mYear = year;
    } else {

        std::cerr << "Invalid year number.\n";
    }

    if (mYear % 4 == 0) {

        if (mYear % 100 == 0) {

            if (mYear % 400 == 0) {

                isLeapYear = true;
            } else {

                isLeapYear = false;
            }
        } else {

            isLeapYear = true;
        }
    } else {

        isLeapYear = false;
    }
}

int dateType::getDay() const {

    return mDay;
}

int dateType::getMonth() const {

    return mMonth;
}

int dateType::getYear() const {

    return mYear;
}

int dateType::print() const {

    std::cout << "The date is: " << getMonth() << "/"
            << getDay() << "/" << getYear() << '\n';
}

void dateType::testLeapYear() {

    if (isLeapYear == true) {

        std::cout << mYear << " is a leap year.\n";
    } else {

        std::cout << mYear << " is not a leap year.\n";
    }
}
