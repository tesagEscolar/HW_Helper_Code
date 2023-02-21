#include <iostream>
#include <cstring>
using namespace std;

int main()
{
 char cadena[100];
 char *ptr = cadena;

 // Lectura de la cadena de texto
 cout << "Introduce una cadena de texto: ";
 cin.getline(cadena, 100);

 // Conversión a minúsculas
 for (int i = 0; cadena[i] != '\0'; i++) {
 if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
 *(ptr + i) = cadena[i] + 32;
 }
 }

 // Impresión de la cadena en minúsculas
 cout << "La cadena en minúsculas es: " << cadena << endl;

 // Conversión a mayúsculas
 for (int i = 0; cadena[i] != '\0'; i++) {
 if (cadena[i] >= 'a' && cadena[i] <= 'z') {
 *(ptr + i) = cadena[i] - 32;
 }
 }

 // Impresión de la cadena en mayúsculas
 cout << "La cadena en mayúsculas es: " << cadena << endl;

 return 0;
}