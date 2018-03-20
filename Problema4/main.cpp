#include <iostream>
#include <math.h> //para usar la funcion pow
//función que recibe una cadena de caracteres numéricos, la convierta a un número entero
//y retorne dicho número. Escriba un programa de prueba.
//Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.
using namespace std;

int main()
{
    char * cadena_dinamica = NULL; // arreglo vacio.
    int cantidad = 0, sum=0, pot=0;

    cout << "Ingrese el tamaño de la cadena numerica: " << endl; //obtenemos un valor de cantidad capturado de consola
    cin >> cantidad;
    int n=cantidad;
    cadena_dinamica = new char[cantidad]; // creamos el arreglo dinámico con el parametro capturado
    cout << "Ingrese cadena numerica de tamañano " << cantidad << ": " <<endl;
    cin >> cadena_dinamica;
    for(int i = 0; i < cantidad; i++){         //Ciclo for para concatenar los enteros
        int entero = cadena_dinamica[i]-'0';
        n=n-1;
        pot=pow(10,n);
        sum=sum+(pot*entero);

        }
    cout <<"Entero : "<< sum <<endl;

     delete [] cadena_dinamica;
    return 0;
}

