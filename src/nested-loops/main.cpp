#include <iostream>
#include <vector>

int main() {
  const int regions = 3;
  const int months = 4;

  std::vector<std::vector<double>> rainfall = {
    {2.5, 3.0, 1.2, 4.1},
    {1.0, 1.5, 2.0, 2.5},
    {3.2, 2.8, 4.0, 3.5},
  };

  for (int i = 0; i < regions; ++i) {
    double totalRainfall = 0.0;

    for (int j = 0; j < months; ++j) {
      totalRainfall += rainfall[i][j];
    }

    double averageRainfall = totalRainfall / months;
    std::cout << "Average rainfall for Region " << i + 1 << ": "
         << averageRainfall << " inches" << std::endl;
  }

  return 0;
}