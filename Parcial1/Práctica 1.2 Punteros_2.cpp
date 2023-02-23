#include <iostream>
using namespace std;

void leerArreglo(int arr[], int n) {
 cout << "Ingrese " << n << " números enteros separados por espacios:" << endl;
 for (int i = 0; i < n; i++) {
 cin >> arr[i];
 }
}

void ordenarArreglo(int arr[], int n) {
 for (int i = 0; i < n-1; i++) {
 for (int j = 0; j < n-i-1; j++) {
 if (arr[j] > arr[j+1]) {
 int temp = arr[j];
 arr[j] = arr[j+1];
 arr[j+1] = temp;
 }
 }
 }
}

void imprimirArreglo(int arr[], int n) {
 cout << "Arreglo original: ";
 for (int i = 0; i < n; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 cout << "Arreglo ordenado: ";
 for (int i = 0; i < n; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
}

int main() {
 const int n = 10;
 int arr[n];
 leerArreglo(arr, n);
 ordenarArreglo(arr, n);
 imprimirArreglo(arr, n);
 return 0;
}