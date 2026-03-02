#include <iostream>
using namespace std;

int main() {
    // Definir los permisos con valores en binario
    int LEER = 0b001;      // Es 1 en decimal
    int ESCRIBIR = 0b010;  // Es 2 en decimal
    int EJECUTAR = 0b100;  // Es 4 en decimal
    
    int permisos;
    
    cout << "=== CONTROL DE PERMISOS UNIX ===" << endl;
    cout << "Ingresa un numero (0-7): ";
    cin >> permisos;
    
    cout << "\n--- ANALISIS DE PERMISOS ---" << endl;
    
    // Verificar permiso de LECTURA usando AND (&)
    if ((permisos & LEER) != 0) {
        cout << "[X] LEER: SI tiene permiso" << endl;
    } else {
        cout << "[ ] LEER: NO tiene permiso" << endl;
    }
    
    // Verificar permiso de ESCRITURA usando AND (&)
    if ((permisos & ESCRIBIR) != 0) {
        cout << "[X] ESCRIBIR: SI tiene permiso" << endl;
    } else {
        cout << "[ ] ESCRIBIR: NO tiene permiso" << endl;
    }
    
    // Verificar permiso de EJECUCION usando AND (&)
    if ((permisos & EJECUTAR) != 0) {
        cout << "[X] EJECUTAR: SI tiene permiso" << endl;
    } else {
        cout << "[ ] EJECUTAR: NO tiene permiso" << endl;
    }
    
    // Mostrar el valor en binario (explicacion simple)
    cout << "\n--- VALOR EN BINARIO (3 bits) ---" << endl;
    cout << "Bit 2 (Ejecutar): " << ((permisos & EJECUTAR) ? 1 : 0) << endl;
    cout << "Bit 1 (Escribir): " << ((permisos & ESCRIBIR) ? 1 : 0) << endl;
    cout << "Bit 0 (Leer):     " << ((permisos & LEER) ? 1 : 0) << endl;
    
    return 0;
}
