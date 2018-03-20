#include <iostream>
//programa que recibe una cadena de caracteres y separa los números del resto de caracteres,
//generando una cadena que no tiene números y otra con los números que había en la cadena original.
//Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
using namespace std;
//ASCII Numeros[48-57]
int main()
{
    char * cadena_dinamica = NULL;
    int cantidad;
    cout << "Ingrese el tamaño de la cadena : " << endl; //obtenemos un valor de cantidad capturado de consola
    cin >> cantidad;
    cadena_dinamica = new char[cantidad]; // creamos el arreglo dinámico con el parametro capturado
    cout << "Ingrese su cadena de caracteres"<< endl;
    cin >> cadena_dinamica;
     for(int i = 0; i < cantidad; i++){
         cout <<cadena_dinamica[i];
     }









    delete [] cadena_dinamica;
    return 0;
}

