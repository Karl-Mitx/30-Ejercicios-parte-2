#include <iostream>
#include <math.h>
using namespace std;

void ejercicio1();
int ejercicio2();
void ejercicio3();
int ejercicio4();
void ejercicio5();
int ejercicio6();
void ejercicio7();
int ejercicio8();
void ejercicio9();
int ejercicio10();
void ejercicio11();
int ejercicio12();
void ejercicio13();
int ejercicio14();
void ejercicio15();
int ejercicio16();
void ejercicio17();
int ejercicio18();
void ejercicio19();
int ejercicio20();
void ejercicio21();
int ejercicio22();
void ejercicio23();
int ejercicio24();
void ejercicio25();
int ejercicio26();
void ejercicio27();
int ejercicio28();
void ejercicio29();
int ejercicio30();

int ejecutarEjercicio(int ejercicio) {
    switch (ejercicio) {

        case 2: return ejercicio2();
        case 4: return ejercicio4();
        case 6: return ejercicio6();
        case 8: return ejercicio8();
        case 10: return ejercicio10();
        case 12: return ejercicio12();
        case 14: return ejercicio14();
        case 16: return ejercicio16();
        case 18: return ejercicio18();
        case 20: return ejercicio20();
        case 22: return ejercicio22();
        case 24: return ejercicio24();
        case 26: return ejercicio26();
        case 28: return ejercicio28();
        case 30: return ejercicio30();
        default:
            cout << "Este ejercicio no existe" << endl;
        return -1;
    }
}
void ejecutarEjercicioVoid(int ejercicioVoid) {
    switch (ejercicioVoid) {
        case 1:   ejercicio1(); break;
        case 3:   ejercicio3(); break;
        case 5:   ejercicio5(); break;
        case 7:   ejercicio7(); break;
        case 9:   ejercicio9(); break;
        case 11:  ejercicio11(); break;
        case 13:  ejercicio13(); break;
        case 15:  ejercicio15(); break;
        case 17:  ejercicio17(); break;
        case 19:  ejercicio19(); break;
        case 21:  ejercicio21(); break;
        case 23:  ejercicio23(); break;
        case 25:  ejercicio25(); break;
        case 27:  ejercicio27(); break;
        case 29:  ejercicio29(); break;
        default:
            cout << "Este ejercicio no existe" << endl;

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
            cout << "Ingrese una opcion del 1 al 30: " << endl;
            cin >> ejercicio;
            if (ejercicio % 2 == 0) {
                ejecutarEjercicio(ejercicio);
            } else {
                ejecutarEjercicioVoid(ejercicio);
            }
        }

    }while (opcion != 2);
    return 0;
}
void ejercicio1() {
    cout << "Ejercicio 1 If-Else: " << endl;
    cout << "Programa que determine si un numero ingresado por el usuario es positivo, negativo o cero: " << endl;
    int a;
    cin >> a;
    if (a > 0) {
        cout << "El numero " << a << " es positivo" << endl;
    } else {
        if (a < 0) {
            cout << "El numero " << a << " es negativo" << endl;
        } else {
            if (a == 0) {
                cout << "El numero " << a << " es igual a 0" << endl;
            }
        }
    }
    cout << endl;


}
int ejercicio2() {
    cout << "Ejercicio 2 If-Else: " << endl;
    cout << "Programa que verifique si un numero ingresado por el usuario es par o impar: " << endl;
    int b;
    cin >> b;
    if (b % 2 == 0) {
        cout << "El numero " << b << " es par" << endl;
    } else {
        cout << "El numero " << b << " es impar" << endl;
    }

    return 0;
}
void ejercicio3() {
    cout << "Ejercicio 3 If-Else: " << endl;
    cout << "Programa que solicite al usuario ingresar tres numeros y muestre el mayor de los tres: " << endl;
    int c, d, e;
    cout << "Ingrese primer numero: ";
    cin >> c;
    cout << "Ingrese segundo numero: ";
    cin >> d;
    cout << "Ingrese tercer numero: ";
    cin >> e;
    int mayor = c;
    if (d > mayor)
    mayor = d;
    if (e > mayor)
    mayor = e;
    cout << "El numero mayor es: " << mayor << endl;

}
int ejercicio4() {
    cout << "Ejercicio 4 If-Else: " << endl;
    cout << "Programa que determine si un año ingresado por el usuario es bisiesto o no: " << endl;
    int f;
    cin >> f;
if ((f % 4 == 0 && f % 100 != 0) || (f % 400 == 0)){
cout << "El año " << f << " es bisiesto" << endl;
} else {
cout << "El año " << f << " no es bisiesto" << endl;
}

    return 0;
}
void ejercicio5() {
    cout << "Ejercicio 5 If-Else: " << endl;
    cout << "Programa que determine si una letra ingresada por el usuario es vocal o consonante: " << endl;
    char c;
bool islowercaseVowel, isuppercaseVowel;
cout << "Ingrese una letra: " << endl;
cin >> c;
isuppercaseVowel = ( c== 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U' );
islowercaseVowel = ( c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u' );
if (islowercaseVowel || isuppercaseVowel)
cout << "La letra " << c << " vocal" << endl;
else
cout << "La letra " << c << " consonante" << endl;


}
int ejercicio6() {
    cout << "Ejercicio 6 If-Else: " << endl;
    cout << "Programa que pida al usuario ingresar un numero y verifique si es primo o no: " << endl;
int g;
cin >> g;
bool primo = true;
 for (int i = 2 ; i < g ; i++) {
if (g % i == 0) {
primo = false;
cout << "El numero " << g << " no es primo" << endl;
}
}
if (primo ==  true) {
cout << "El numero " << g << " es primo" << endl;
}

    return 0;
}
void ejercicio7() {
    cout << "Ejercicio 7 If-Else: " << endl;
    cout << "Programa que determine si un año ingresado por el usuario es un año de nacimiento valido (mayor que 1900 y menor que el año actual): " << endl;
    int h;
cin >> h;
if (h > 1900 ) {
cout << "Su año de nacimiento es " << h << ", gracias por ingresarlo" << endl;
} if (h < 1900) {
cout << "El numero " << h << " no es valido" << endl;
} if (h > 2025) {
cout << "Usted todavia no ha nacido! XD" << endl;}

}
int ejercicio8() {
    cout << "Ejercicio 8 If-Else: " << endl;
    cout << "Programa que determine si un numero ingresado por el usuario es multiplo de 5 y de 7 " << endl;
    cout << "Ingrese su numero para ver si es multiplo de 5: ";
    int a;
    int b;
    cin >> a;
    if ((a % 5) == 0) {
        cout << "El numero " << a << " es multiplo de 5" << endl;
    } else {
        cout << "El numero " << a << " no es multiplo de 5" << endl;
    } cout << endl;
    cout << endl;
    cout << "Ingrese su numero para ver si es multiplo de 7" << endl;
    cout << endl;
    cin >> b;
    if ((b % 7) == 0) {
        cout << "El numero " << b << " es multiplo de 7" << endl;
    } else {
        cout << "El numero " << b << " no es multiplo de 7" << endl;
    }
    return 0;
}
void ejercicio9() {
    cout << "Ejercicio 9 If-Else: " << endl;
    cout << "Programa en C++ que solicite al usuario ingresar la calificacion numerica (0-100): " << endl;
    int h;
    cout << "Ingrese su calificacion: ";
    cin >> h;
    if (h >= 101) {
        cout << "Su calificacion no puede superar el nivel de puntos de 100";
    } else if (h >= 90 && h <= 100) {
        cout << "Su calificacion es muy buena, tiene una A" << endl;
    } else if (h >= 80 && h <= 89) {
        cout << "Su calificacion es buena, tiene una B" << endl;
    } else if (h >= 70 && h <= 79) {
        cout << "Su calificacion esta bien, tiene una C" << endl;
    } else if (h >= 60 && h <= 69) {
        cout << "Su calificacion podria mejorar, tiene una D" << endl;
    } else if (h >= 0 && h <= 59) {
        cout << "Necesita mejorar, esta reprobado/a con una F" << endl;
    }

}
int ejercicio10() {
    cout << "Ejercicio 10 If-Else: " << endl;
    cout << "Programa en C++ que solicite al usuario ingresar el precio de un articulo y el porcentaje de descuento aplicable: " << endl;
    float precio, descuento, precioFinal;
    cout << endl;
    cout << "10. Ingrese el precio de su producto, debe superar los 1000 Quetzales: ";
    cout << endl;
    cout << "Su precio es: ";
    cout << endl;
    cin >> precio;
    cout << endl;
    if (precio > 1000) {
        cout << "Ahora ingrese su descuento, no debe superar los 100: ";
        cout << endl;
        cin >> descuento;
        if (descuento < 0 || descuento > 100) {
            cout << "Su descuento debe de estar entre 0 y 100";
            cout << endl;
        } else {
            precioFinal = precio - (precio * descuento / 100);
            cout << "Su precio con descuento es de: " << precioFinal << endl;
        }
    } else {
        cout << "El precio debe ser mayor a 1000 para aplicar un descuento: ";
    }
    cout << endl;
    cout << endl;

    return 0;
}
void ejercicio11() {
    cout << "Ejercicio 11 Bucle While: " << endl;
    cout << "Programa que imprima los numeros del 1 al 20 en orden ascendente: " << endl;
    int i = 1;
    while (i < 21) {
        cout << i << endl;
        i++;
    }

}
int ejercicio12() {
    cout << "Ejercicio 12 Bucle While: " << endl;
    cout << "Programa que solicite al usuario un numero y luego imprima todos los numeros desde 1 hasta ese numero " << endl;
    int r = 1;
    int j;
    cout << "Ingrese un numero: ";
    cin >> j;
    cout << endl;
    while (r <= j) {
        cout << r << endl;
        r++;
    }
    return 0;
}
void ejercicio13() {
    cout << "Ejercicio 13 Bucle While: " << endl;
    cout << "Programa que pida al usuario ingresar numeros positivos y los sume, deteniendose cuando ingresa un numero negativo: " << endl;
    int sum = 0, numero;
    do {
        cout << "Ingrese un numero: ";
        cout << endl;
        cin >> numero;
        if (numero > 0) {
            sum += numero;
        }
    } while (numero > 1);
    cout << "La suma es: " << sum << endl;

}
int ejercicio14() {
    cout << "Ejercicio 14 Bucle While: " << endl;
    cout << "Programa que genere la secuencia de Fibonacci hasta un numero ingresado por el usuario: " << endl;
    int l, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "4. Programa que genera la secuencia de Fibonacci hasta un numero ingresado por el usuario";
    cout << endl;
    cout << "Ingrese un numero: ";
    cin >> l;
    cout << endl;
    cout << "Serie de Fibonacci: " << t1 << "," << t2;
    nextTerm = t1 + t2;

    while (nextTerm <= l) {
        cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    cout << endl;
    return 0;
}
void ejercicio15() {
    cout << "Ejercicio 15 Bucle While: " << endl;
    cout << "Programa que solicite al usuario ingresar numeros hasta que la suma de los numeros ingresados sea mayor a 100: " << endl;
    int numero1 = 0, suma1 = 0, contador= 0;

    while (suma1 <= 100) {
        cout << "Ingrese un numero: ";
        cin >> numero1;
        suma1 += numero1;
        contador++;
    }

    cout << "La cantidad de numeros es: " << contador << endl;
    cout << endl;
    cout << "La suma es: " << suma1 << endl;


}
int ejercicio16() {
    cout << "Ejercicio 16 Bucle While: " << endl;
    cout << "Programa que pida al usuario ingresar un numero y luego imprima todos los numeros pares hasta ese numero: " << endl;
    int n, par = 2;
    cout << "6. Ingresar un numero y se le revelara los numeros pares hasta llegar al numero";
    cout << endl;
    cout << "Ingresar su numero: ";
    cin >> n;

    while (par <= n) {
        cout << par << " ";
        par += 2;
        cout << endl;

    }
    return 0;
}
void ejercicio17() {
    cout << "Ejercicio 17 Bucle While: " << endl;
    cout << "Programa que calcule la media de una serie de numeros ingresados por el usuario: " << endl;
    int o = 2;
    cout << "7. Calcular la media de una serie de numeros";
    cout << endl;

    cout << endl;
    if (o <= 0) {
        cout << "Entrada invalida, intentelo de nuevo";
    }
    int suma2 = 0, num4, p = 0;
    while (p < 2) {
        cout << "Ingresar un numero: " << p + 1 << ": ";
        cin >> num4;
        suma2 += num4;
        p++;
    }
    double promedio = static_cast<double>(suma2) / 2;
    cout << endl;
    cout << "La media es: " << promedio << endl;

}
int ejercicio18() {
    cout << "Ejercicio 18 Bucle While: " << endl;
    cout << "Programa que pida al usuario ingresar numeros hasta que el numero ingresado sea igual a 0: " << endl;
    int numeros, suma3 = 0;
    numeros = 1;
    while (numeros != 0) {
        cout << "Ingresar un numero: ";
        cin >> numeros;
        if (numeros != 0) {
            suma3 = suma3 + numeros;
        }
    }
    cout << "El programa se hizo rebelde, quiso sumar y logro: " << suma3 << endl;
    return 0;
}
void ejercicio19() {
    cout << "Ejercicio 19 Bucle While: " << endl;
    cout << "Programa que imprima los primeros 10 numeros naturales y su respectivo cuadrado: " << endl;
    int numero5 = 1;
    while (numero5 <= 10) {
        cout << "Numero: " << numero5 << ", Cuadrado: " << numero5 * numero5 << endl;
        numero5++;
    }
    cout << endl;

}
int ejercicio20() {
    cout << "Ejercicio 20 Bucle While: " << endl;
    cout << "Programa que calcule el producto de los primeros 10 numeros naturales: " << endl;
    int prod = 1;
    int q = 1;
    while (q <= 10) {
        prod *= q;
        q++;
    }
    cout << "el producto de los primeros 10 numeros naturales es: " << prod << endl;

    return 0;
}
void ejercicio21() {
    cout << "Ejercicio 21 Bucle For: " << endl;
    cout << "Programa que imprima los numeros pares del 2 al 20: " << endl;
    int s;
    for (s =2 ; s <= 20 ; s++) {
        if (s % 2 == 0) {
            cout << s << endl;
        }
    }

}
int ejercicio22() {
    cout << "Ejercicio 22 Bucle For: " << endl;
    cout << "Programa que solicite al usuario un numero y muestre la tabla de multiplicar de ese numero del 1 al 10: " << endl;
    int tabla;
    cout << "Que tabla del multiplicar desea ver?: ";
    cin >> tabla;
    for (int t = 1; t <= 10 ; t++) {
        cout << tabla << "*" << t << "=" << tabla * t <<  endl;

    }
    return 0;
}
void ejercicio23() {
    cout << "Ejercicio 23 Bucle For: " << endl;
    cout << "Programa en C++ que solicite al usuario ingresar un numero entero positivo n y luego calcule la suma de todos los numeros pares desde 1 hasta n " << endl;
    int u;
    cout << "Ingresar un numero: ";
    cin >> u;
    int suma6 = 0;
    for (int w = 2; w <= u; w += 2) {
        suma6 += w;
    }
    cout << endl;
    cout << "La suma de los pares hasta " << u << " es: " << suma6 << endl;

}
int ejercicio24() {
    cout << "Ejercicio 24 Bucle For: " << endl;
    cout << "Programa que calcule el factorial de un numero ingresado por el usuario: " << endl;
    cout << "Ingrese el numero que desee calcular: " << endl;
    int x, y;
    long long factorial = 1;
    cin >> x;
    if (x < 0) {
        cout << "El valor " << x << " no puede ser negativo, es invalido";
    } else {
        for (y = 1; y <= x ; y++) {
            factorial *= y;

        }
        cout << "El factorial de " << x << " es: " << factorial << endl;
    }
    return 0;
}
void ejercicio25() {
    cout << "Ejercicio 25 Bucle For: " << endl;
    cout << "Programa que imprima la serie de numeros primos del 1 al 50: " << endl;
    for (int z = 2 ; z <= 50 ; z++) {
        bool esPrimo = true;
        for (int prim = 2; prim * prim <= z ; prim++) {
            if (z % prim == 0) {
                esPrimo = false;
                break;
            }
        } if (esPrimo) {
            cout << z << " ";
        }
    cout << endl;
    }

}
int ejercicio26() {
    cout << "Ejercicio 26 Bucle For: " << endl;
    cout << "Programa que imprima la siguiente serie: 1, 3, 6, 10, 15, ..., n: " << endl;
    int ene;
    cout << "Ingrese el valor de n: ";
    cin >> ene;

    int suma7 = 0;
    for (int ye = 1; suma7 + ye <= ene; ye++) {
        suma7 += ye;
        cout << suma7 << " ";
    }
    cout << endl;
    return 0;
}
void ejercicio27() {
    cout << "Ejercicio 27 Bucle For: " << endl;
    cout << "Programa que imprima los primeros 10 terminos de la serie de Fibonacci: " << endl;
    int fibo, te1 = 0, te2 = 1, sigTerm = 0;
    cout << "7. Programa que imprime los primeros 10 terminos de la serie de Fibonacci";
    cout << endl;
    cout << te1 << ", " << te2;
    for (int ze = 3; ze <= 10 ; ze++) {
        sigTerm = te1 + te2;
        cout << ", " << sigTerm;
        te1 = te2;
        te2 = sigTerm;
    cout << endl;
    }

}
int ejercicio28() {
    cout << "Ejercicio 28 Bucle For: " << endl;
    cout << "Programa que calcule e imprima la suma de los primeros 100 numeros naturales: " << endl;
    int contador, suma8 = 0;

    for (contador = 1 ; contador <= 100 ; contador++) {
        suma8 += contador;
        cout << contador << " ";
    }
    cout << endl;
    cout << "La suma total es: " << suma8 << endl;
    return 0;
}
void ejercicio29() {
    cout << "Ejercicio 29 Bucle For: " << endl;
    cout << "Programa que pida al usuario ingresar un numero y luego imprima todos los divisores de ese numero: " << endl;
    int div, cont = 0;
    cout << "9. programa que imprime los divisores de un numero ingresado";
    cout << endl;
    cout << "Digite el numero que desea saber sus divisores: ";
    cin >> div;
    cout << endl;
    for (int po = 1; po <= div; po++) {
        if ( div % po == 0) {
            cont++;
        }
    }
    cout << "Su numero tiene " << cont << " divisores"<<endl;
}
int ejercicio30() {
    cout << "Ejercicio 30 Bucle For: " << endl;
    cout << "Programa que imprima los primeros 10 numeros primos: " << endl;
    int count = 0;
    for (int num9 = 2 ; count < 10 ; num9++) {
        bool esPrimo = true;

        for (int an = 2; an <= sqrt(num9); an++) {
            if (num9 % an == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << num9 << " ";
            count++;
        }
    }
    cout << endl;

    return 0;
}
