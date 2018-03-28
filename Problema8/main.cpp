#include <iostream>

using namespace std;
//Programa que recibe una cadena de caracteres y separa los números del resto de caracteres,
//generando una cadena que no tiene números y otra con los números que había en la cadena original.
//Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
int main()
{
    char * cadena_dinamica = NULL, * cadena_numeros=NULL, * cadena_caract=NULL; //Apuntadores de cadenas original, de numeros y caracteres
    int n, contnum=0, contcar=0, aux=0;
    cout <<"Ingrese el tamaño de la cadena a ingresar: "<<endl;
    cin >> n;
    cadena_dinamica = new char[n];      //Cadena con todos los caracteres
    cout <<"Ingrese una cadena de caracteres: "<<endl;
    cin >> cadena_dinamica;
    cout<<"Cadena Original: ";
    for(int i=0; i<n;i++){           //Ciclo que imprime la cadena original y determina longitud de cadena de numeros
        cout<<*(cadena_dinamica+i);  //y cadena de caracteres
        if (*(cadena_dinamica+i)>47 && *(cadena_dinamica+i)<58)
            contnum+=1;
         else
         contcar+=1;
       }
    cout<<endl;

    cadena_numeros = new char[contnum];      //inicializacion de cadena de numeros
    cadena_caract = new char[contcar];       //inicializacion de cadena de caracteres

    for(int i=0; i<n;i++){                 //Ciclo for que "rellena" la cadena de numeros
        if (*(cadena_dinamica+i)>47 && *(cadena_dinamica+i)<58){
            *(cadena_numeros+aux)=*(cadena_dinamica+i);
         aux+=1;
        }
       }
    aux=0;
    for(int i=0; i<n;i++){            //Ciclo for que "rellena" la cadena de caracteres
        if (*(cadena_dinamica+i)<47 || *(cadena_dinamica+i)>58){
            *(cadena_caract+aux)=*(cadena_dinamica+i);
                 aux+=1;
        }
         }
    cout<<"Cadena con texto: ";
    for(int i=0; i<contcar;i++){           //Ciclo for que imprime la cadena con caracteres
        cout<<*(cadena_caract+i);
    }
    cout<<endl;
    cout<<"Cadena con numeros: ";
    for(int i=0; i<contnum;i++){            //Ciclo for que imprime la cadena con numeros
        cout<<*(cadena_numeros+i);
    }
    cout<<endl;


    delete [] cadena_dinamica;         //Borrar memoria dinamica
    delete [] cadena_numeros;
    delete [] cadena_caract;
    return 0;
}

