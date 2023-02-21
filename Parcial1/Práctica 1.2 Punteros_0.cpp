#include <iostream>
#include <cstring>
using namespace std;

int main() {
 char str[100];
 cout << "Ingresa una cadena de texto: ";
 cin.getline(str, 100);

 // Convertir a minúsculas
 char strMinus[100];
 int i = 0;
 while (str[i]) {
 strMinus[i] = tolower(str[i]);
 i++;
 }
 strMinus[i] = '\0';

 // Convertir a mayúsculas
 char strMayus[100];
 i = 0;
 while (str[i]) {
 strMayus[i] = toupper(str[i]);
 i++;
 }
 strMayus[i] = '\0';

 // Imprimir resultados
 cout << "Cadena en minúsculas: " << strMinus << endl;
 cout << "Cadena en mayúsculas: " << strMayus << endl;

 return 0;
}