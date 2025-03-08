#include <iostream>

const double PI = 3.14159;

// Función que calcula el área de un círculo
double calcularArea(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio;
    std::cout << "Ingresa el radio del circulo: ";
    std::cin >> radio;
    
    double area = calcularArea(radio);
    std::cout << "El area del circulo es: " << area << std::endl;

    return 0;
}
