// test_circulo.cpp
#include <iostream>
#include <cassert>
#include "area_circulo.h"  // Usamos el header en lugar del .cpp

void test_calcularArea() {
    // Pruebas con radios positivos
    assert(calcularArea(1.0) == 3.14159);   
    assert(calcularArea(2.0) == 12.56636);  
    assert(calcularArea(0.0) == 0.0);       

    // Prueba con radio negativo (debe devolver 0)
    assert(calcularArea(-5.0) == 0.0);

    // Si todas las pruebas pasan, mostramos un mensaje
    std::cout << "Todas las pruebas han pasado exitosamente.\n";
}

int main() {
    test_calcularArea(); // Ejecutamos la prueba
    return 0;
}

