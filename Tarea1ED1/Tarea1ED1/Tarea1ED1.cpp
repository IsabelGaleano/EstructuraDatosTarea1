// Tarea1ED1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include "Calculo.h"

void imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Obtener el mayor de tres numeros \n";
    cout << "\n 2: Obtener el promedio de numeros \n";
    cout << "\n 3: Obtener el numero factorial \n";
    cout << "\n 4: Obtener la nota del estudiante \n";
    cout << "\n 5: Convertir un numero binario a decimal \n";
    cout << "\n 6: Obtener la cantidad de digitos de un numero \n";
    cout << "\n 7: Salir del programa \n";

}

int leerOpcion() {
    int opcion;
    cout << "Selecciona una opcion: "; cin >> opcion;
    return opcion;

}

bool ejecutarOpcion(int opcion) {
    bool salir = false;
    int a, b, c;
    int numPromedio;
    int numFactorial;
    double notaEstudiante;
    long numBinario;
    int numDigitos;
    Calculo calculo;
    switch (opcion) {
    case 1:
        cout << "Ejercicio 1: Numero mayor. Digite tres numeros\n";
        cout << "Ingrese el primer numero: "; cin >> a;
        cout << "Ingrese el segundo numero: "; cin >> b;
        cout << "Ingrese el tercer numero: "; cin >> c;
        calculo.mayor(a, b, c);
        break;
    case 2:
        cout << "\nEjercicio 2: Promedio de numeros.\n";
        cout << "Digite la cantidad de numeros: "; cin >> numPromedio;
        cout << "El promedio es de: " << calculo.promedio(numPromedio);
        break;
    case 3:
        cout << "\nEjercicio 3: Numero factorial.\n";
        cout << "Ingrese el numero factorial: "; cin >> numFactorial;
        cout << "El numero factorial es: " << calculo.numFactorial(numFactorial);
        break;
    case 4:
        cout << "\nEjercicio 4: Nota del estudiante.\n";
        cout << "Ingrese la nota del estudiante: "; cin >> notaEstudiante;
        cout << "La nota del estudiante sobre 50 y equivale a 100 es de: " << calculo.notaEstudiante(notaEstudiante);
        break;
    case 5:
        cout << "\nEjercicio 5: Conversion numero binario a decimal.\n";
        cout << "Ingrese el numero binario: "; cin >> numBinario;
        cout << "El numero decimal es: " << calculo.numBinario(numBinario);
        break;
    case 6:
        cout << "\n Ejercicio 6: Cantidad de digitos de un numero.\n";
        cout << "Ingrese la cifra de numeros: "; cin >> numDigitos;
        cout << "La cantidad de digitos del numero ingresado es de: " << calculo.numDigitos(numDigitos);
        break;
    case 7:
        salir = true;
       
    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}



int main()
{
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion);
    
    } while (!salir);

}
