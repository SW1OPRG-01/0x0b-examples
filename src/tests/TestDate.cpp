#include "TestDate.h"
#include <iostream>
void TestDate::advance(Date date, std::string expected) {
  date.toNextDate();
  std::cout << (date.toString() == expected ? "PASSED": "FAILED") << " " << date.toString() << std::endl;
}

void TestDate::toString(Date date, std::string expected) {
  std::cout << (date.toString() == expected ? "PASSED": "FAILED") << " " << date.toString() << std::endl; 
}