#pragma once
#include <string>

class Date {
public:
	// Initialize the date with the date d, month m and year y
	Date(int d, int m, int y);
	// Advance the date to the next date
	void toNextDate();
	// A string representation of the date in the format 'dd-mm-yyyy'
	std::string toString();
private:
	int day, month, year;
	// A string representation with the with two of the integer dm.
	// precondition: 1 <= dm <= 31
	std::string formatedString(int dm);
	// Check if the day invariant is violated. If so, set day = 1 and add one to month
	void checkDayOverflow();
	// Check if the month invariant is violated. If so, set month = 1 and add one to year
	void checkMonthOverflow();
	// The days in the current month
	int daysInMonth();
	// Is the current year a leap year?
	bool isLeapYear();
};