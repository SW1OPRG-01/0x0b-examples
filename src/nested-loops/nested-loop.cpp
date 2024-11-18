#include <iostream>
#include <vector>

void total_for_region(double *total, 
                      std::vector<double> region_rainfall) {
  for (int month = 0; month < region_rainfall.size(); ++month) {
    *total += region_rainfall[month]; 
  }
} 

int main() {

  std::vector<std::vector<double>> rainfall = {
    {2.5, 3.0, 1.2, 4.1},
    {1.0, 1.5, 2.0, 2.5},
    {3.2, 2.8, 4.0, 3.5},
  };

  for (int region = 0; region < rainfall.size(); ++region) {
    double total = 0.0;
    total_for_region(&total, rainfall[region]);
    double average = total / rainfall[region].size();
    std::cout << "Average rainfall for Region " << region + 1 
              << ": " << average << " inches" 
              << std::endl;
  }

  return 0;
}
