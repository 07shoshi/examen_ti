// area_circulo.cpp
#include "area_circulo.h"

const double PI = 3.14159;

double calcularArea(double radio) {
    if (radio < 0) return 0; // Manejo de radios negativos
    return PI * radio * radio;
}

