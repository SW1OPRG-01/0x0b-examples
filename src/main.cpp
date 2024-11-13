#include <iostream>
#include <vector>
#include "Date.h"

int main() {
  std::vector<Date> dates = {
    { 2007, 1, 15 },
    { 2007, 1, 1 },
    { 2020, 5, 31 },
    { 1999, 12, 31 },
    { 2024, 2, 28 },
    { 2024, 2, 2019 },
  };  
  Date xmas = Date(2024, 12, 24);
  std::cout << xmas.toString() << std::endl;
  return 0;
}
