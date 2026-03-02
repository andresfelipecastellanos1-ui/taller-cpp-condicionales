#include <iostream>
#include <string>
using namespace std;

int main() {
    int nota;
    string letra;
    string estado;
    
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "Ingresa la nota (0-100): ";
    cin >> nota;
    
    // Validar que la nota este en rango
    if(nota < 0 || nota > 100) {
        cout << "ERROR: La nota debe estar entre 0 y 100" << endl;
        return 0;
    }
    
    // Asignar letra usando operadores relacionales
    if(nota >= 90) {
        letra = "A";
    } else if(nota >= 80) {
        letra = "B";
    } else if(nota >= 70) {
        letra = "C";
    } else if(nota >= 60) {
        letra = "D";
    } else {
        letra = "F";
    }
    
    // Determinar estado (Aprobado o Reprobado)
    // Se aprueba con 60 o mas
    if(nota >= 60) {
        estado = "Aprobado";
    } else {
        estado = "Reprobado";
    }
    
    // Mostrar resultados
    cout << "\n--- RESULTADO ---" << endl;
    cout << "Nota numerica: " << nota << endl;
    cout << "Letra: " << letra << endl;
    cout << "Estado: " << estado << endl;
    
    return 0;
}
