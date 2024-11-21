#include <iostream>
#include <vector>
#include "Date.h"
#include "tests/TestDate.h"

int main() {
  std::cout << "TEST toNextDate()" << std::endl;  
  std::vector<TestInput> advanceDates = {
    {{ 2007, 1, 15 }, "16-01-2007"},
    {{ 2020, 5, 31 }, "01-06-2020"},
    {{ 1999, 12, 31 },"01-01-2000"},
    {{ 2024, 2, 28 }, "29-02-2024"},
    {{ 2019, 2, 28 }, "01-03-2019"},
  };

  TestDate test = TestDate();
  for(auto date = advanceDates.begin(); date != advanceDates.end(); ++date) {
    test.advance(date->date, date->expected);
  }

  std::cout << "TEST toString()" << std::endl;
  std::vector<TestInput> toStringDates = {
    {{ 2007, 12, 15 }, "15-12-2007"},
    {{ 2020, 5, 1 }, "01-05-2020"},
  };  
  
  for(auto date = toStringDates.begin(); date != toStringDates.end(); ++date) {
    test.toString(date->date, date->expected);
  }

  return 0;
}
