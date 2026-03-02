#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double celsius;
    double fahrenheit;
    double kelvin;
    double rankine;
    
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;
    rankine = (celsius + 273.15) * 9.0 / 5.0;
    
    cout << fixed << setprecision(2);
    
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    cout << "Rankine: " << rankine << endl;
    
    return 0;
}
