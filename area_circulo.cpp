#include <iostream>

const double PI = 3.14159;

// Funci�n que calcula el �rea de un c�rculo
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
