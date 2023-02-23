#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
 int i, j;
 for (i = 0; i < n - 1; i++) {
 for (j = 0; j < n - i - 1; j++) {
 if (arr[j] > arr[j + 1]) {
 swap(arr[j], arr[j + 1]);
 }
 }
 }
}

int main() {
 int arr[10];

 cout << "Ingrese 10 números enteros:" << endl;
 for (int i = 0; i < 10; i++) {
 cin >> arr[i];
 }

 cout << "Arreglo original:" << endl;
 for (int i = 0; i < 10; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;

 bubbleSort(arr, 10);

 cout << "Arreglo ordenado:" << endl;
 for (int i = 0; i < 10; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;

 return 0;
}