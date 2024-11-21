#include "Date.h"
#include <iostream>
using namespace std;

// Initialize the date with the date d, month m and year y
Date::Date(int d, int m, int y): day(d), month(m), year(y) {
}

// Advance the date to the next date
void Date::toNextDate() {
	day += 1;
	checkDayOverflow();
}

// A string representation of the date in the format 'dd-mm-yyyy'
std::string Date::toString() {
	return formatedString(day) + "-" + formatedString(month) + "-" + to_string(year);
}

// A string representation with the with two of the integer dm.
// Precondition: 1 <= dm <= 31
string Date::formatedString(int dm) {
	if (dm <= 9) { // single digit
		return "0" + to_string(dm);

  } else { // double digits
		return to_string(dm);
  } 
}

// Check if the day invariant is violated. If so, it sets day = 1 and month += 1
void Date::checkDayOverflow() {
	if (day > daysInMonth()) {
		day = 1;
		month +=1;
	}
	checkMonthOverflow();
}

// The days in the current month
int Date::daysInMonth() {
	// Month         1   2   3   4   5   6   7   8   9   10  11  12
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeapYear()) {
		return 29;
  } else {
		return days[month - 1];
  }
}

// Is the current year a leap year?
bool Date::isLeapYear() {
	if (month == 2) 
		return (((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0);
	else
		return false;
}

// Check if the month invariant is violated. If so, set month = 1 and year += 1
void Date::checkMonthOverflow() {
	if (month > 12) {
		month = 1;
		year += 1;
	}
}