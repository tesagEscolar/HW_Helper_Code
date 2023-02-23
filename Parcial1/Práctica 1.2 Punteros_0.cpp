#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
 string input_str, upper_str, lower_str;

 // Leer la cadena de texto ingresada por el usuario
 cout << "Ingrese una cadena de texto: ";
 getline(cin, input_str);

 // Convertir la cadena a mayúsculas
 upper_str = input_str;
 transform(upper_str.begin(), upper_str.end(), upper_str.begin(), ::toupper);

 // Convertir la cadena a minúsculas
 lower_str = input_str;
 transform(lower_str.begin(), lower_str.end(), lower_str.begin(), ::tolower);

 // Imprimir ambos resultados en pantalla
 cout << "La cadena en mayusculas es: " << upper_str << endl;
 cout << "La cadena en minusculas es: " << lower_str << endl;

 return 0;
}