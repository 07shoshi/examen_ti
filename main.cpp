// main.cpp
#include <iostream>
#include "area_circulo.h"

int main() {
    double radio;
    std::cout << "Ingresa el radio del c�rculo: ";
    std::cin >> radio;

    double area = calcularArea(radio);
    std::cout << "El �rea del c�rculo es: " << area << std::endl;

    return 0;
}

