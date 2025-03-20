#include <iostream>
using namespace std;

int ejercicio1();
int ejercicio2();
int ejercicio3();
int ejercicio4();
int ejercicio5();
int ejercicio6();
int ejercicio7();
int ejercicio8();
int ejercicio9();
int ejercicio10();
int ejercicio11();
int ejercicio12();
int ejercicio13();
int ejercicio14();
int ejercicio15();
int ejercicio16();
int ejercicio17();
int ejercicio18();
int ejercicio19();
int ejercicio20();
int ejercicio21();
int ejercicio22();
int ejercicio23();
int ejercicio24();
int ejercicio25();
int ejercicio26();
int ejercicio27();
int ejercicio28();
int ejercicio29();
int ejercicio30();

int ejecutarEjercicio(int ejercicio) {
    switch (ejercicio) {
        case 1: return ejercicio1();
        case 2: return ejercicio2();
        case 3: return ejercicio3();
        case 4: return ejercicio4();
        case 5: return ejercicio5();
        case 6: return ejercicio6();
        case 7: return ejercicio7();
        case 8: return ejercicio8();
        case 9: return ejercicio9();
        case 10: return ejercicio10();
        case 11: return ejercicio11();
        case 12: return ejercicio12();
        case 13: return ejercicio13();
        case 14: return ejercicio14();
        case 15: return ejercicio15();
        case 16: return ejercicio16();
        case 17: return ejercicio17();
        case 18: return ejercicio18();
        case 19: return ejercicio19();
        case 20: return ejercicio20();
        case 21: return ejercicio21();
        case 22: return ejercicio22();
        case 23: return ejercicio23();
        case 24: return ejercicio24();
        case 25: return ejercicio25();
        case 26: return ejercicio26();
        case 27: return ejercicio27();
        case 28: return ejercicio28();
        case 29: return ejercicio29();
        case 30: return ejercicio30();
        default:
            cout << "Este ejercicio no existe" << endl;
        return -1;
    }
}


int main() {
    int opcion;
    do {
        cout << "======MENU DE ELECCION======" << endl;
        cout << "1. Ejecutar un ejercicio" << endl;
        cout << "2. Salir" << endl;
        cout << "Porfavor elija una opcion: " << endl;
        cin >> opcion;

        if (opcion == 1) {
            int ejercicio;
            cout << "Ingrese una opcion del 1 al 30: ";
            cin >> ejercicio;
            ejecutarEjercicio(ejercicio);
        }
    } while (opcion != 2);
    return 0;
}
int ejercicio1() {
    cout << "Ejercicio 1 If-Else: " << endl;
    cout << "Programa que determine si un número ingresado por el usuario es positivo, negativo o cero: " << endl;

    return 0;
}
int ejercicio2() {
    cout << "Ejercicio 2 If-Else: " << endl;
    cout << "Programa que verifique si un número ingresado por el usuario es par o impar: " << endl;

    return 0;
}
int ejercicio3() {
    cout << "Ejercicio 3 If-Else: " << endl;
    cout << "Programa que solicite al usuario ingresar tres números y muestre el mayor de los tres: " << endl;

    return 0;
}
int ejercicio4() {
    cout << "Ejercicio 4 If-Else: " << endl;
    cout << "Programa que determine si un año ingresado por el usuario es bisiesto o no: " << endl;

    return 0;
}
int ejercicio5() {
    cout << "Ejercicio 5 If-Else: " << endl;
    cout << "Programa que determine si una letra ingresada por el usuario es vocal o consonante: " << endl;

    return 0;
}
int ejercicio6() {
    cout << "Ejercicio 6 If-Else: " << endl;
    cout << "Programa que pida al usuario ingresar un número y verifique si es primo o no: " << endl;

    return 0;
}
int ejercicio7() {
    cout << "Ejercicio 7 If-Else: " << endl;
    cout << "Programa que determine si un año ingresado por el usuario es un año de nacimiento válido (mayor que 1900 y menor que el año actual): " << endl;

    return 0;
}
int ejercicio8() {
    cout << "Ejercicio 8 If-Else: " << endl;
    cout << "Programa que determine si un número ingresado por el usuario es múltiplo de 5 y de 7 " << endl;

    return 0;
}
int ejercicio9() {
    cout << "Ejercicio 9 If-Else: " << endl;
    cout << "Programa en C++ que solicite al usuario ingresar la calificación numérica (0-100): " << endl;

    return 0;
}
int ejercicio10() {
    cout << "Ejercicio 10 If-Else: " << endl;
    cout << "Programa en C++ que solicite al usuario ingresar el precio de un artículo y el porcentaje de descuento aplicable: " << endl;

    return 0;
}
int ejercicio11() {
    cout << "Ejercicio 11 Bucle While: " << endl;
    cout << "Programa que imprima los números del 1 al 20 en orden ascendente: " << endl;

    return 0;
}
int ejercicio12() {
    cout << "Ejercicio 12 Bucle While: " << endl;
    cout << "Programa que solicite al usuario un número y luego imprima todos los números desde 1 hasta ese número " << endl;

    return 0;
}
int ejercicio13() {
    cout << "Ejercicio 13 Bucle While: " << endl;
    cout << "Programa que pida al usuario ingresar números positivos y los sume, deteniéndose cuando ingresa un número negativo: " << endl;

    return 0;
}
int ejercicio14() {
    cout << "Ejercicio 14 Bucle While: " << endl;
    cout << "Programa que genere la secuencia de Fibonacci hasta un número ingresado por el usuario: " << endl;

    return 0;
}
int ejercicio15() {
    cout << "Ejercicio 15 Bucle While: " << endl;
    cout << "Programa que solicite al usuario ingresar números hasta que la suma de los números ingresados sea mayor a 100: " << endl;

    return 0;
}
int ejercicio16() {
    cout << "Ejercicio 16 Bucle While: " << endl;
    cout << "Programa que pida al usuario ingresar un número y luego imprima todos los números pares hasta ese número: " << endl;

    return 0;
}
int ejercicio17() {
    cout << "Ejercicio 17 Bucle While: " << endl;
    cout << "Programa que calcule la media de una serie de números ingresados por el usuario: " << endl;

    return 0;
}
int ejercicio18() {
    cout << "Ejercicio 18 Bucle While: " << endl;
    cout << "Programa que pida al usuario ingresar números hasta que el número ingresado sea igual a 0: " << endl;

    return 0;
}
int ejercicio19() {
    cout << "Ejercicio 19 Bucle While: " << endl;
    cout << "Programa que imprima los primeros 10 números naturales y su respectivo cuadrado: " << endl;

    return 0;
}
int ejercicio20() {
    cout << "Ejercicio 20 Bucle While: " << endl;
    cout << "Programa que calcule el producto de los primeros 10 números naturales: " << endl;

    return 0;
}
int ejercicio21() {
    cout << "Ejercicio 21 Bucle For: " << endl;
    cout << "Programa que imprima los números pares del 2 al 20: " << endl;

    return 0;
}
int ejercicio22() {
    cout << "Ejercicio 22 Bucle For: " << endl;
    cout << "Programa que solicite al usuario un número y muestre la tabla de multiplicar de ese número del 1 al 10: " << endl;

    return 0;
}
int ejercicio23() {
    cout << "Ejercicio 23 Bucle For: " << endl;
    cout << "Programa en C++ que solicite al usuario ingresar un número entero positivo n y luego calcule la suma de todos los números pares desde 1 hasta n " << endl;

    return 0;
}
int ejercicio24() {
    cout << "Ejercicio 24 Bucle For: " << endl;
    cout << "Programa que calcule el factorial de un número ingresado por el usuario: " << endl;

    return 0;
}
int ejercicio25() {
    cout << "Ejercicio 25 Bucle For: " << endl;
    cout << "Programa que imprima la serie de números primos del 1 al 50: " << endl;

    return 0;
}
int ejercicio26() {
    cout << "Ejercicio 26 Bucle For: " << endl;
    cout << "Programa que imprima la siguiente serie: 1, 3, 6, 10, 15, ..., n: " << endl;

    return 0;
}
int ejercicio27() {
    cout << "Ejercicio 27 Bucle For: " << endl;
    cout << "Programa que imprima los primeros 10 términos de la serie de Fibonacci: " << endl;

    return 0;
}
int ejercicio28() {
    cout << "Ejercicio 28 Bucle For: " << endl;
    cout << "Programa que calcule e imprima la suma de los primeros 100 números naturales: " << endl;

    return 0;
}
int ejercicio29() {
    cout << "Ejercicio 29 Bucle For: " << endl;
    cout << "Programa que pida al usuario ingresar un número y luego imprima todos los divisores de ese número: " << endl;

    return 0;
}
int ejercicio30() {
    cout << "Ejercicio 30 Bucle For: " << endl;
    cout << "Programa que imprima los primeros 10 números primos: " << endl;


    return 0;
}
