#ifndef TEST_DATE_H
#define TEST_DATE_H

#include <string>
#include "../Date.h"

struct TestInput {
  Date date;
  std::string expected;
};

class TestDate {
  public:
    void toString(Date date, std::string expected);
    void advance(Date date, std::string expected);
};

#endif