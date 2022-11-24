/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file are-ecual.cc
  * @author Jiabo Cheng Pan alu0101560564@ull.edu.es
  * @date Nov 20 2022
  * @brief The program reads two numbers and compares if they are equal.
  * @bug There are no known bugs
  */

#include <cmath>
#include <iostream>

/// It tells if the numbers are equal.
bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
  if (abs(number1 - number2) < epsilon) {
    return true;
  } else {
    return false;
  }
}

int main() {
  double knumero1, knumero2;
  while (std::cin >> knumero1 >> knumero2) {
    std::cout << AreEqual (knumero1, knumero2) << "\n";
  }
}
