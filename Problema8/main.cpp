#include <iostream>
using namespace std;
string sepcad(string cad, char *num); //Función que separa los caracteres y los numeros en arreglos diferentes
int loncad(string cad); //Función que da la longitud de la cadena
//programa que recibe una cadena de caracteres y separa los números del resto de caracteres,
//generando una cadena que no tiene números y otra con los números que había en la cadena original.
//Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.

//ASCII Numeros[48-57]
int main()
{
   int longitud;
   string original, caracteres;
   cout << " Ingrese la cadena: " << endl;
   getline(cin, original); //Capturar la cadena
   longitud=loncad(original); //USo de la funcion para calcular la longitud de la cadena
   char numeros[longitud]; // cadena que guardara los numeros de la cadena original
   caracteres = sepcad(original, numeros); //separacion de numeros y caracteres
   cout << "Original: " << original << endl;
   cout << "Texto: " << caracteres << ". " << "Numeros: " << numeros <<"."<<endl;
   return 0;
}
string sepcad(string cad, char *num){
    int contn = 0;

    for(int i=0;cad[i];i++){

        if(cad[i] >= 48 && cad[i] <= 57){
            *(num+contn) = cad[i];
            cad[i] = 0;
         }
        //else
        //*(num+contn)=' ';
        contn += 1;
}
    return cad;

}
int loncad(string cad){
    int lon;
    for(int i=0; cad[i]; i++){
        lon = i+1;
    }
    return lon;
}
