#include <iostream>
#define PI 3.14159

using namespace std;

int main() {
    double radio, perimetro;
    
    // Solicitar el radio al usuario
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    
    // Calcular el perímetro
    perimetro = 2 * PI * radio;
    
    // Mostrar el resultado
    cout << "El perímetro del círculo es: " << perimetro << endl;
    
    return 0;
}

