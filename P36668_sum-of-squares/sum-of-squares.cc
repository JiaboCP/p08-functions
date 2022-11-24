/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file sum-of-squares.cc
  * @author Jiabo Cheng Pan alu0101560564@ull.edu.es
  * @date Nov 18 2022
  * @brief The program reads a natural number n, and prints the result of the
  * sum of squares.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P36668
  */

#include <iostream>

int SumOfSquares(int number) {
  int base;
  int result = 0;
  for(int base = 1; number >= base; ++base) {
    result += base * base;
  }
  return result;
}

int main () {
  int numberx;
  std::cin >> numberx;
  std::cout << SumOfSquares(numberx) << std::endl;
  return 0;
}
