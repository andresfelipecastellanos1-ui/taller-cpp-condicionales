taller-cpp-condicionales/
ejercicio_01/ejercicio_01.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celsius;
    double fahrenheit;
    double kelvin;
    double rankie;
    
    cout<< "ingrese temperatura en Celsius:" ;
    cin>> celsius;
    
    fahrenheit = (celsius *9.0/5.0)+32;
    kelvin = celsius + 273.15;
    rankie = (celsius + 273.15) * 9.0/5.0;
    
    cout<< "fahrenheit: " <<fahrenheit<< endl;
    cout<< "kelvin: " <<kelvin<< endl;
    cout<< "rankie: " <<rankie<< endl;

    return 0;
}
