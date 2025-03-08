// main.cpp
#include <iostream>
#include "area_circulo.h"

int main() {
    double radio;
    std::cout << "Ingresa el radio del círculo: ";
    std::cin >> radio;

    double area = calcularArea(radio);
    std::cout << "El área del círculo es: " << area << std::endl;

    return 0;
}

