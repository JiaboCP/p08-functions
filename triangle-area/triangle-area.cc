#include <iostream>
#include <cmath>
#include <iomanip>
double Area(double lado1, double lado2, double lado3) {
  double s = (lado1 + lado2 + lado3) / 2;
  double area = sqrt (s * (s - lado1) * (s - lado2) * (s - lado3));
  return area;
}
bool is_a_valid_triangle(double lado1, double lado2, double lado3) {
  if (lado1 >= (lado2 + lado3) || lado2 >= (lado1 + lado3) || lado3 >= (lado1 + lado2)) {
  return false;
  } else {
  return true;
  }
}

int main() {
  double lado1;
  double lado2;
  double lado3;
  std::cin >> lado1 >> lado2 >> lado3;
  if (is_a_valid_triangle(lado1, lado2, lado3) == false) {
  std:: cout << "Not a valid Triangle" << std::endl;
  } else if (is_a_valid_triangle(lado1, lado2, lado3) == true) {
  std::cout << std::fixed << std::setprecision(2) << Area(lado1, lado2, lado3) << std::endl;
  }
  return 0;
}
