#include <iostream>
#define PI 3.14159

using namespace std;

int main() {
    double radio, perimetro;
    
    // Solicitar el radio al usuario
    cout << "Ingrese el radio del c�rculo: ";
    cin >> radio;
    
    // Calcular el per�metro
    perimetro = 2 * PI * radio;
    
    // Mostrar el resultado
    cout << "El per�metro del c�rculo es: " << perimetro << endl;
    
    return 0;
}

