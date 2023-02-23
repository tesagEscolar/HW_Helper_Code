char mensaje[100]; cout << "Ingrese el mensaje a cifrar: ";
cin.getline(mensaje, 100); int clave;
cout << "Ingrese la clave de cifrado (un numero primo): ";
cin >> clave; void cifrar(char \*mensaje, int clave) {
 int i = 0;
 while (mensaje[i] != '\0') {
 char letra = mensaje[i];
 if (isalpha(letra)) {
 letra = toupper(letra);
 letra = (((letra - 'A') * clave) % 26) + 'A';
 }
 mensaje[i] = letra;
 i++;
 }
} void descifrar(char \*mensaje, int clave) {
 int i = 0;
 while (mensaje[i] != '\0') {
 char letra = mensaje[i];
 if (isalpha(letra)) {
 letra = toupper(letra);
 letra = (((letra - 'A') * clave) % 26) + 'A';
 letra = (((letra - 'A') * (26 - (clave % 26))) % 26) + 'A';
 }
 mensaje[i] = letra;
 i++;
 }
} cout << "Mensaje cifrado: " << mensaje << endl;
descifrar(mensaje, clave);
cout << "Mensaje descifrado: " << mensaje << endl; #include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

void cifrar(char \*mensaje, int clave) {
 int i = 0;
 while (mensaje[i] != '\0') {
 char letra = mensaje[i];
 if (isalpha(letra)) {
 letra = tou