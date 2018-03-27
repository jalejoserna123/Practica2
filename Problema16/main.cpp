#include <iostream>
//programa que recibe un numero n y calcule el número de caminos posibles en una cuadricula de nxn.
using namespace std;
int main()
{
    int n,may=0;
    int **ptr;
    cout <<"Ingrese el tamaño de la malla nxn: " << endl;
    cin >> n;
    n=n+1;
    ptr =  new int*[n];  //Reservar memoria para las filas
    for(int i=0 ; i<n ;i++){
        ptr[i]=new int[n];   //Reservar memoria para las columnas
    }

        for(int j=0; j<n ;j++)  //Inicializando filas[0][j] en 1
            *(*(ptr)+j)=1;
        for(int j=0; j<n ;j++) //Inicializando columnas[j][0] en 1
            *(*(ptr+j))=1;
    *(*ptr)=0;
        for(int i=1;i<n;i++){   //Ciclo for que suma los posibles caminos de llegar a cada vertice
            for(int j=1;j<n;j++)
                *(*(ptr+i)+j)=*(*(ptr+i-1)+j)+*(*(ptr+i)+j-1);
        }

    for(int i=0;i<n;i++){      //Ciclo for que busca el mayor numero que es el numero que se encuentra 
        for(int j=0;j<n;j++){  //en la ultima posicion y que a su vez es el numero de caminos posibles
            if (*(*(ptr+i)+j)>may){
                    may=*(*(ptr+i)+j);
            }
        }
    }
    cout<<"Para una malla de "<<n-1<<"*"<<n-1<<" puntos hay "<<may<<" caminos"<<endl;
}

