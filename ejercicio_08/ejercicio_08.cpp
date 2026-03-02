#include <iostream>
using namespace std;

int main() {
    double saldo = 1000;
    double monto;
    int opcion;
    int numTransacciones = 0;
    bool salir = false;
    
    cout << "=== CAJERO AUTOMATICO ===" << endl;
    cout << "Bienvenido a tu banco" << endl;
    
    while(salir == false) {
        cout << "\n--- MENU ---" << endl;
        cout << "Saldo actual: $" << saldo << endl;
        cout << "Transacciones realizadas: " << numTransacciones << endl;
        cout << endl;
        cout << "1. Depositar dinero" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Consultar saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                cout << "\n-- DEPOSITO --" << endl;
                cout << "Ingresa el monto a depositar: $";
                cin >> monto;
                
                if(monto > 0) {
                    saldo += monto;
                    numTransacciones++;
                    cout << "Deposito exitoso!" << endl;
                    cout << "Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Error: El monto debe ser mayor a cero" << endl;
                }
                break;
                
            case 2:
                cout << "\n-- RETIRO --" << endl;
                cout << "Ingresa el monto a retirar: $";
                cin >> monto;
                
                if(monto > 0) {
                    if(monto <= saldo) {
                        saldo -= monto;
                        numTransacciones++;
                        cout << "Retiro exitoso!" << endl;
                        cout << "Nuevo saldo: $" << saldo << endl;
                    } else {
                        cout << "Error: Saldo insuficiente" << endl;
                        cout << "Tu saldo es: $" << saldo << endl;
                    }
                } else {
                    cout << "Error: El monto debe ser mayor a cero" << endl;
                }
                break;
                
            case 3:
                cout << "\n-- CONSULTA --" << endl;
                cout << "Tu saldo actual es: $" << saldo << endl;
                numTransacciones++;
                break;
                
            case 4:
                cout << "\nGracias por usar nuestro cajero" << endl;
                cout << "Transacciones totales: " << numTransacciones << endl;
                cout << "Saldo final: $" << saldo << endl;
                salir = true;
                break;
                
            default:
                cout << "\nError: Opcion no valida" << endl;
        }
    }
    
    return 0;
}
