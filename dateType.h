
class dateType {
private:
    int mMonth;
    int mDay;
    int mYear;
    bool isLeapYear;

public:
    // function to set the date
    // member variables are set according to the parameters
    void setDate(int month, int day, int year);
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    // Function to return the day
    int getDay() const;
    // Function to return the month
    int getMonth() const;
    // Function to return the year
    int getYear() const;
    // Function to print the date
    int print() const;
    void testLeapYear();


    // Default constructor to set the date according to the parameters
    dateType(int month, int day, int year) {
        mMonth = month;
        mDay = day;
        mYear = year;

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

};
