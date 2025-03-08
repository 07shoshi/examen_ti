// archivo: test_circulo.cpp
#include <gtest/gtest.h>
#include "circulo.cpp"  // Importamos la función a probar

// Prueba para la función calcularArea()
TEST(CirculoTest, AreaPositiva) {
    EXPECT_DOUBLE_EQ(calcularArea(1.0), 3.14159);   // Radio 1
    EXPECT_DOUBLE_EQ(calcularArea(2.0), 12.56636);  // Radio 2
    EXPECT_DOUBLE_EQ(calcularArea(0.0), 0.0);       // Radio 0
}

// Prueba para valores negativos (debería devolver 0 o un error manejado)
TEST(CirculoTest, AreaNegativa) {
    EXPECT_GE(calcularArea(-5.0), 0.0); // No debería ser negativo
}


