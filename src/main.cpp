#include <iostream>
#include <vector>
#include "Date.h"
#include "tests/TestDate.h"

int main() {
  std::vector<Date> dates = {
    { 2007, 1, 15 },
    { 2007, 1, 1 },
    { 2020, 5, 31 },
    { 1999, 12, 31 },
    { 2024, 2, 28 },
    { 2024, 2, 2019 },
  };

  TestDate test = TestDate();
  for(auto date = dates.begin(); date != dates.end(); ++date) {
    test.advance(*date, "");
  }

  Date xmas = Date(2024, 12, 24);
  std::cout << xmas.toString() << std::endl;
  return 0;
}
