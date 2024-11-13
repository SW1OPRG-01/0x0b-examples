#include "../../Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) { }

void Date::toNextDate() {

}

std::string Date::toString() {
  return std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day);
}