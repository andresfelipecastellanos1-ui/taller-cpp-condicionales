#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operador;
    double resultado;
    bool error = false;
    
    cout << "=== CALCULADORA BASICA ===" << endl;
    
    // Pedir datos al usuario
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    
    cout << "Ingresa el operador (+, -, *, /, %): ";
    cin >> operador;
    
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    
    // Usar switch para elegir la operacion
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
            
        case '-':
            resultado = num1 - num2;
            break;
            
        case '*':
            resultado = num1 * num2;
            break;
            
        case '/':
            // Validar division por cero
            if(num2 == 0) {
                cout << "ERROR: No se puede dividir entre cero!" << endl;
                error = true;
            } else {
                resultado = num1 / num2;
            }
            break;
            
        case '%':
            // Validar division por cero
            if(num2 == 0) {
                cout << "ERROR: No se puede calcular modulo entre cero!" << endl;
                error = true;
            } else {
                // Para modulo con decimales se usa fmod, pero como es basico
                // hacemos la conversion a int para modulo simple
                resultado = (int)num1 % (int)num2;
            }
            break;
            
        default:
            cout << "ERROR: Operador no valido!" << endl;
            error = true;
    }
    
    // Mostrar resultado si no hubo error
    if(error == false) {
        cout << "\nResultado: " << num1 << " " << operador << " " << num2 << " = " << resultado << endl;
    }
    
    return 0;
}
