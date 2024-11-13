#include <iostream>
#include "Date.h"

int main() {
  Date xmas = Date(2024, 12, 24);
  std::cout << xmas.toString() << std::endl;
  return 0;
}
