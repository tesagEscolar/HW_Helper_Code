
// Definir la clase Calculadora
// Invocando una instancia de esta clase, obtendriamos un objeto de tipo calculadora
Class Calculadora{
private:
     // Definir variables miembro privadas
    //Encapsulación solo se pueden acceder a los atributos a través de los metodos publicos
     double num1; // atributo 1
     double num2; // atributo 2 
public:
     // Definir métodos públicos
     Calculadora(double n1, double n2) {
         // Constructor que toma dos parámetros e inicializa las variables miembro
         num1 = n1;
         num2 = n2;
     }
    double sumar() {
         // Método que suma los dos números y devuelve el resultado
         return num1 + num2;
     }
     double restar() {
         // Método que resta los dos números y devuelve el resultado
         return num1 - num2;
     }
     double multiplicar() {
         // Método que multiplica los dos números y devuelve el resultado
         return num1 * num2;
     }
     double dividir() {
         // Método que divide los dos números y devuelve el resultado
        if (num2 != 0) {
             return num1 / num2;
         } else {
             return 0;
         }
     }
};