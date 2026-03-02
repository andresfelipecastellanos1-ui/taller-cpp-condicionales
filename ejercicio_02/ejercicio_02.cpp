#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    
    cout << "Ingresa lado 1: ";
    cin >> a;
    cout << "Ingresa lado 2: ";
    cin >> b;
    cout << "Ingresa lado 3: ";
    cin >> c;
    
    // Verificar si es triangulo valido
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Es un triangulo valido" << endl;
        
        // Por lados
        if (a == b && b == c) {
            cout << "Equilatero" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Escaleno" << endl;
        }
        
        // Por angulos (usando pitagoras)
        // Ordenamos para que 'c' sea el mayor
        float aux;
        if (a > b) { aux = a; a = b; b = aux; }
        if (b > c) { aux = b; b = c; c = aux; }
        if (a > b) { aux = a; a = b; b = aux; }
        
        // Ahora c es el lado mayor
        if (c * c == a * a + b * b) {
            cout << "Rectangulo" << endl;
        } else if (c * c > a * a + b * b) {
            cout << "Obtusangulo" << endl;
        } else {
            cout << "Acutangulo" << endl;
        }
        
    } else {
        cout << "No es un triangulo valido" << endl;
    }
    
    return 0;
}
