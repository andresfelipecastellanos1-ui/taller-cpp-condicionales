#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "=== SWAP (INTERCAMBIO) DE VALORES ===" << endl;
    cout << "Ingresa el valor de A: ";
    cin >> a;
    cout << "Ingresa el valor de B: ";
    cin >> b;
    
    cout << "\nValores originales: A = " << a << ", B = " << b << endl;
    cout << "========================================" << endl;
    
    // METODO 1: Con variable temporal (el mas facil)
    cout << "\n--- METODO 1: Variable Temporal ---" << endl;
    {
        int temp;           // Variable local temporal
        temp = a;           // Guardo A en temp
        a = b;              // B pasa a A
        b = temp;           // temp (valor viejo de A) pasa a B
        
        cout << "Despues del swap: A = " << a << ", B = " << b << endl;
    } // Aqui muere la variable temp (scope local)
    
    // Restauramos valores para el siguiente metodo
    // (en un programa real no harías esto, es solo para mostrar los 3 metodos)
    int temp2 = a;
    a = b;
    b = temp2;
    cout << "Restauramos: A = " << a << ", B = " << b << endl;
    
    // METODO 2: Con operaciones aritmeticas (+ y -)
    cout << "\n--- METODO 2: Operaciones Aritmeticas (+ y -) ---" << endl;
    cout << "Paso 1: A = A + B = " << a << " + " << b << " = " << (a + b) << endl;
    a = a + b;              // A ahora tiene la suma de ambos
    
    cout << "Paso 2: B = A - B = " << a << " - " << b << " = " << (a - b) << endl;
    b = a - b;              // B = (A+B) - B = A original
    
    cout << "Paso 3: A = A - B = " << a << " - " << b << " = " << (a - b) << endl;
    a = a - b;              // A = (A+B) - A = B original
    
    cout << "Despues del swap: A = " << a << ", B = " << b << endl;
    
    // Restauramos valores para el siguiente metodo
    int temp3 = a;
    a = b;
    b = temp3;
    cout << "Restauramos: A = " << a << ", B = " << b << endl;
    
    // METODO 3: Con XOR (^)
    cout << "\n--- METODO 3: XOR (^) ---" << endl;
    cout << "Paso 1: A = A ^ B" << endl;
    cout << "        " << a << " ^ " << b << " = " << (a ^ b) << endl;
    a = a ^ b;              // A ahora tiene A XOR B
    
    cout << "Paso 2: B = A ^ B" << endl;
    cout << "        " << a << " ^ " << b << " = " << (a ^ b) << endl;
    b = a ^ b;              // B = (A^B) ^ B = A original
    
    cout << "Paso 3: A = A ^ B" << endl;
    cout << "        " << a << " ^ " << b << " = " << (a ^ b) << endl;
    a = a ^ b;              // A = (A^B) ^ A = B original
    
    cout << "Despues del swap: A = " << a << ", B = " << b << endl;
    
    cout << "\n========================================" << endl;
    cout << "Valores finales: A = " << a << ", B = " << b << endl;
    cout << "Comprobacion: Los valores se intercambiaron correctamente!" << endl;
    
    return 0;
}
