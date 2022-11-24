#include "change-case.h"
#include <iostream>

char ChangerCase (char letra) {
  int letra_a_int = static_cast<int>(letra); 
  if ((letra_a_int <= 64) or (letra_a_int >= 91 && letra_a_int <= 96) or (letra_a_int >= 123)) {
    return letra;
  }
  if (letra_a_int <= 122 && letra_a_int >= 95) {
    int letra_mayus_a_minus = letra_a_int - 32; 
    char letra_minus = static_cast<char>(letra_mayus_a_minus);
    return letra_minus;
  }
  if (letra_a_int <= 90 && letra_a_int >= 65) {
    int letra_minus_a_mayus = letra_a_int + 32; 
    char letra_mayus = static_cast<char>(letra_minus_a_mayus);
    return letra_mayus;   
    } 
  return 0;
}
