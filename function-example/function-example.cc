#include <iostream>
#include <cmath>
#include <iomanip>
void CheckParameters(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "El programa necesita que introduzca solo 3 parámetros numéricos" << std::endl;
    std::cout << "Intétalo de nuevo" << std::endl;
  }
}

double  CalcularFuncion(double variable_x, double variable_y, double variable_t) {
  double numerador = sqrt(2 * variable_t - 4);
  double denominador = pow(variable_x, 2) - pow(variable_y, 2);
  double resultado{0};
  resultado = numerador / denominador;
  return resultado;
}

int main(int argc, char* argv[]) {
  void CheckParameters();
  double valor_x = std::__cxx11::stol(argv[1]);
  double valor_y = std::__cxx11::stol(argv[2]);
  double valor_t = std::__cxx11::stol(argv[3]);
  std::cout << std::fixed << std::setprecision(7) << CalcularFuncion(valor_x, valor_y, valor_t) << std::endl;
  return 0;
}
