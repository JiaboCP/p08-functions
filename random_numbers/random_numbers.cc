/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file trigonometry.cc
  * @author Jiabo Cheng Pan alu0101560564@ull.edu.es
  * @date Nov 18 2022
  * @brief El programa escoge un número al azar que está entre el intervalo que
  * hemos introducido.
  * @bug There are no known bugs
  */

#include <cstdlib>
#include <iostream>

int aleatorio(int intervalo1, int intervalo2);
int main() {
  int knumero1, knumero2;
  while (std::cin >> knumero1 >> knumero2) {
    while (knumero1 > knumero2) {
      std::cin >> knumero2;
    }
    std::cout << aleatorio(knumero1, knumero2) << "\n";
  }
  return 0;
}
int aleatorio(int intervalo1, int intervalo2) {
  int valor = intervalo1 + rand() % (intervalo2 + 1 - intervalo2);
  return valor;
}
