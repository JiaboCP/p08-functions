/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file change-case-main.cc
  * @author Jiabo Cheng Pan alu0101560564@ull.edu.es
  * @date Nov 18 2022
  * @brief The program reads a word and change to lowercase o uppercase
  * @bug There are no known bugs
  */

#include <iostream>
#include "change-case.h"

int main() {
  char letra;
  while (std::cin >> letra) {
  std::cout << ChangerCase (letra);
  } 
  return 0;
}
