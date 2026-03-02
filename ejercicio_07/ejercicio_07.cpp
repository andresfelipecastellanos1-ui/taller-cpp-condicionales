#include <iostream>
using namespace std;

int main() {
    int anio;
    int residuo4;
    int residuo100;
    int residuo400;
    
    cout << "=== VERIFICADOR DE AÑO BISIESTO ===" << endl;
    cout << "Ingresa un año: ";
    cin >> anio;
    
    cout << "\n--- PRUEBA DE ESCRITORIO ---" << endl;
    
    // Calcular residuos paso a paso
    residuo4 = anio % 4;
    residuo100 = anio % 100;
    residuo400 = anio % 400;
    
    cout << "Año ingresado: " << anio << endl;
    cout << anio << " / 4 = " << (anio / 4) << " sobra " << residuo4 << endl;
    cout << anio << " / 100 = " << (anio / 100) << " sobra " << residuo100 << endl;
    cout << anio << " / 400 = " << (anio / 400) << " sobra " << residuo400 << endl;
    
    cout << "\n--- RAZONAMIENTO ---" << endl;
    
    // REGLA 1: ¿Es divisible entre 4?
    if(residuo4 == 0) {
        cout << "Paso 1: Es divisible entre 4 (sobra 0)" << endl;
        
        // REGLA 2: ¿Es año de siglo?
        if(residuo100 == 0) {
            cout << "Paso 2: Es año de siglo (sobra 0 al dividir entre 100)" << endl;
            
            // REGLA 3: ¿Es divisible entre 400?
            if(residuo400 == 0) {
                cout << "Paso 3: Es divisible entre 400 (sobra 0)" << endl;
                cout << "\n>>> El año " << anio << " SI es bisiesto" << endl;
                cout << "    (Es siglo pero es divisible entre 400)" << endl;
            } else {
                cout << "Paso 3: NO es divisible entre 400 (sobra " << residuo400 << ")" << endl;
                cout << "\n>>> El año " << anio << " NO es bisiesto" << endl;
                cout << "    (Es siglo pero NO es divisible entre 400)" << endl;
            }
            
        } else {
            cout << "Paso 2: NO es año de siglo (sobra " << residuo100 << ")" << endl;
            cout << "\n>>> El año " << anio << " SI es bisiesto" << endl;
            cout << "    (Es divisible entre 4 y no es siglo)" << endl;
        }
        
    } else {
        cout << "Paso 1: NO es divisible entre 4 (sobra " << residuo4 << ")" << endl;
        cout << "\n>>> El año " << anio << " NO es bisiesto" << endl;
        cout << "    (No cumple la regla basica de divisibilidad entre 4)" << endl;
    }
    
    return 0;
}
