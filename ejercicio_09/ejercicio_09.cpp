#include <iostream>
using namespace std;

int main() {
   float peso;
   float altura;
   float imc;
   
   cout << "=== CALCULADORA DE IMC ===" << endl;
   cout << "Ingresa tu peso en kg: ";
   cin >> peso;
   cout << "Ingresa tu altura en metros: ";
   cin >> altura;
   
   imc = peso / (altura * altura);
   
   cout << "\nTu IMC es: " << imc << endl;
   cout << endl;
   
   if(imc < 18.5) {
       cout << "Clasificacion: Bajo peso" << endl;
       cout << "Sugerencia: Consulta con un nutricionista para aumentar tu peso de forma saludable" << endl;
   } else if(imc >= 18.5 && imc < 25) {
       cout << "Clasificacion: Peso normal" << endl;
       cout << "Sugerencia: Manten tu estilo de vida saludable con dieta balanceada y ejercicio" << endl;
   } else if(imc >= 25 && imc < 30) {
       cout << "Clasificacion: Sobrepeso" << endl;
       cout << "Sugerencia: Considera hacer mas ejercicio y cuidar tu alimentacion" << endl;
   } else if(imc >= 30 && imc < 35) {
       cout << "Clasificacion: Obesidad I" << endl;
       cout << "Sugerencia: Visita a un medico para un plan de perdida de peso personalizado" << endl;
   } else {
       cout << "Clasificacion: Obesidad II" << endl;
       cout << "Sugerencia: Busca atencion medica pronto para cuidar tu salud" << endl;
   }
   
   return 0;
}
