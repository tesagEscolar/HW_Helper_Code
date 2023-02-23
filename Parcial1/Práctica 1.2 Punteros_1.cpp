#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// Función para encriptar una cadena utilizando el cifrado de César
void encriptar(char\* cadena, int primo) {
 int len = strlen(cadena);
 for (int i = 0; i < len; i++) {
 if (isalpha(cadena[i])) {
 char letra = toupper(cadena[i]);
 letra = (letra - 'A' + primo) % 26 + 'A';
 cadena[i] = islower(cadena[i]) ? tolower(letra) : letra;
 }
 }
}

// Función para desencriptar una cadena utilizando el cifrado de César
void desencriptar(char\* cadena, int primo) {
 int len = strlen(cadena);
 for (int i = 0; i < len; i++) {
 if (isalpha(cadena[i])) {
 char letra = toupper(cadena[i]);
 letra = (letra - 'A' - primo + 26) % 26 + 'A';
 cadena[i] = islower(cadena[i]) ? tolower(letra) : letra;
 }
 }
}

int main() {
 char cadena[100];
 int primo;
 char opcion;

 cout << "Introduzca la cadena a encriptar o desencriptar: ";
 cin.getline(cadena, 100);

 cout << "Introduzca el numero primo para el recorrido: ";
 cin >> primo;

 cout << "Desea encriptar (E) o desencriptar (D) la cadena?: ";
 cin >> opcion;

 if (toupper(opcion) == 'E') {
 encriptar(cadena, primo);
 cout << "La cadena encriptada es: " << cadena << endl;
 } else if (toupper(opcion) == 'D') {
 desencriptar(cadena, primo);
 cout << "La cadena desencriptada es: " << cadena << endl;
 } else {
 cout << "Opcion no valida" << endl;
 }

 return 0;
}