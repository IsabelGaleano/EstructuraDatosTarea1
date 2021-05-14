#include "Calculo.h"
#include <iostream>

using namespace std;

Calculo::Calculo() {}

int Calculo::mayor(int a, int b, int c) {
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

double Calculo::promedio(int n) {
    double numero, promedio;
    double total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero: "; cin >> numero;
        total += numero;
    }
    promedio = total / n;

    return promedio;
}

int Calculo::numFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }


    return factorial;
}

double Calculo::notaEstudiante(double n) {
    double nota = n / 50;
    nota = nota * 100;
    return nota;
}

int Calculo::numBinario(long long n) {
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

int Calculo::numDigitos(int n) {
    unsigned int numeroDigitos = 0;
    do {
        ++numeroDigitos;
        n /= 10;
    } while (n);

    return numeroDigitos;

}
