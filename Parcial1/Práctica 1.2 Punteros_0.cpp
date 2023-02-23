#include <iostream>
#include <cstring>
using namespace std; char str[100]; cout << "Introduce una cadena de texto: ";
cin.getline(str, 100);

char *ptr = str;
while (*ptr)
{
 *ptr = tolower(*ptr);
 ptr++;
} cout << "La cadena en minúsculas es: " << str << endl; ptr = str;
while (*ptr)
{
 *ptr = toupper(*ptr);
 ptr++;
} cout << "La cadena en mayúsculas es: " << str << endl; #include <iostream>
#include <cstring>
using namespace std;

int main()
{
 char str[100];
 cout << "Introduce una cadena de texto: ";
 cin.getline(str, 100);

 char *ptr = str;
 while (*ptr)
 {
 *ptr = tolower(*ptr);
 ptr++;
 }

 cout << "La cadena en minúsculas es: " << str << endl;

 ptr = str;
 while (*ptr)
 {
 *ptr = toupper(*ptr);
 ptr++;
 }

 cout << "La cadena en mayúsculas es: " << str << endl;

 return 0;
}