// Tarea1ED1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include "Calculo.h"
int main()
{
    int a, b, c;
    int numPromedio;
    int numFactorial;
    double notaEstudiante;
    long numBinario;
    int numDigitos;
    Calculo calculo;
    cout << "Ejercicio 1: Numero mayor. Digite tres numeros\n";
    cout << "Ingrese el primer numero: "; cin >> a;
    cout << "Ingrese el segundo numero: "; cin >> b;
    cout << "Ingrese el tercer numero: "; cin >> c;
    calculo.mayor(a, b, c); 
  
    cout << "\nEjercicio 2: Promedio de numeros.\n";
    cout << "Digite la cantidad de numeros: "; cin >> numPromedio;
    cout << "El promedio es de: " << calculo.promedio(numPromedio);


    cout << "\nEjercicio 3: Numero factorial.\n";
    cout << "Ingrese el numero factorial: "; cin >> numFactorial;
    cout << "El numero factorial es: " << calculo.numFactorial(numFactorial);

    cout << "\nEjercicio 4: Nota del estudiante.\n";
    cout << "Ingrese la nota del estudiante: "; cin >> notaEstudiante;
    cout << "La nota del estudiante sobre 50 y equivale a 100 es de: " << calculo.notaEstudiante(notaEstudiante);

    cout << "\nEjercicio 5: Conversion numero binario a decimal.\n";
    cout << "Ingrese el numero binario: "; cin >> numBinario;
    cout << "El numero decimal es: " << calculo.numBinario(numBinario);

    cout << "\n Ejercicio 6: Cantidad de digitos de un numero.\n";
    cout << "Ingrese la cifra de numeros: "; cin >> numDigitos;
    cout << "La cantidad de digitos del numero ingresado es de: " << calculo.numDigitos(numDigitos);
    
}
