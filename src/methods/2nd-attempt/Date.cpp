#include "Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) { }

void Date::toNextDate() {

}

std::string Date::toString() {
  return std::to_string(year) + "-" + pad(month) + "-" + pad(day);
}

std::string Date::pad(int number) { 
 return std::to_string(number); 
}
