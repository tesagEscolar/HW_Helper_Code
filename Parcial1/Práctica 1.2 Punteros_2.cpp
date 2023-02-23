#include <iostream>
using namespace std;

void leer\_arreglo(int arr[], int tam);
void ordenar\_burbuja(int arr[], int tam);
void imprimir\_arreglo(int arr[], int tam);

int main() {
 int arreglo[10];
 leer\_arreglo(arreglo, 10);
 ordenar\_burbuja(arreglo, 10);
 imprimir\_arreglo(arreglo, 10);
 return 0;
}

void leer\_arreglo(int arr[], int tam) {
 for (int i = 0; i < tam; i++) {
 cout << "Ingrese el elemento " << i + 1 << ": ";
 cin >> arr[i];
 }
} void ordenar\_burbuja(int arr[], int tam) {
 for (int i = 0; i < tam - 1; i++) {
 for (int j = 0; j < tam - i - 1; j++) {
 if (arr[j] > arr[j + 1]) {
 int temp = arr[j];
 arr[j] = arr[j + 1];
 arr[j + 1] = temp;
 }
 }
 }
} void imprimir\_arreglo(int arr[], int tam) {
 cout << "Arreglo original: ";
 for (int i = 0; i < tam; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 cout << "Arreglo ordenado: ";
 for (int i = 0; i < tam; i++) {
 cout << arr[i] << " ";
 }
}