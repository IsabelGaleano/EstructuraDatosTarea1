// Tarea1ED1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Calculo {
public: 
    static int mayor(int a, int b, int c) {
        if (a > b && a > c) {
            cout << "El numero mayor es: " << a;
        }
        if (b > c && b > a) {
            cout << "El numero mayor es: " << b;
        }
        if (c > b && c > a) {
            cout << "El numero mayor es: " << c;
        }
        return 0;

    }

    static double promedio(int n) {
        double numero, promedio;
        double total = 0;
        for (int i = 0; i < n; i++) {
            cout << "Ingrese el numero: "; cin >> numero;
            total += numero;
        }
        promedio = total / n;
      
        return promedio;
    }

    static int numFactorial(int n) {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        
        return factorial;
    }

    static double notaEstudiante(double n) {
        double nota = n / 50;
        nota = nota * 100;
        return nota;
    }

    static int numBinario(long long n) {
        int numeroDecimal = 0, i = 0, calculo;
        while (n != 0)
        {
            calculo = n % 10;
            n /= 10;
            numeroDecimal += calculo * pow(2, i);
            ++i;
        }
        return numeroDecimal;
    }

    static int numDigitos(int n) {
        unsigned int numeroDigitos = 0;
        do {
            ++numeroDigitos;
            n /= 10;
        } while (n);

        return numeroDigitos;

    }

};
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
