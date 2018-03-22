#include <iostream>

using namespace std;

int main()
{
    int n, numeros, sumatoria=0, sumatoria1=0, ban = 1;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;
    int matriz[n][n];
    for(int i=0;i<n;i++){       //inicializacion de una matriz con tamaño n*n
        for(int j=0;j<n;j++){
            matriz[i][j] = '0';
        }
    }
    while(true){
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){          //Elementos de la matriz nxn que el usuario ingresa
                cout << "Ingrese un numero en la posicion: " << i << "," << j << ": ";
                cin >> numeros;
                matriz[i][j] = numeros;
            }
        }
        break;
    }
    for(int i=0;i<n;i++){           //sumatorias para comprobar la suma de las filas, columnas y diagonales
        sumatoria = 0;
        for(int j=0; j<n;j++){
            sumatoria += matriz[i][j];
        }
        if(sumatoria1==0){
            sumatoria1=sumatoria;
        }
        if(sumatoria1!=sumatoria){
            ban = 0;
            break;
        }
    }
    if(ban==1){
        for(int j=0;j<n;j++){
            sumatoria = 0;
            for(int i=0; i<n;i++){
                sumatoria += matriz[i][j];
            }
            if(sumatoria1!=sumatoria){
                ban = 0;
                break;
            }
        }
    }
    if(ban==1){                     //sumatorias para comprobar la suma de las filas, columnas y diagonales
        sumatoria = 0;
        int t = n-1;
        for(int i=0; i<n;i++){
            sumatoria += matriz[i][i];
        }
        if((sumatoria)!=sumatoria1){
            ban=0;
        }
        sumatoria = 0;
        for(int i=0; i<n;i++,t--){
            sumatoria += matriz[i][t];
        }
        if(sumatoria!=sumatoria1){
            ban=0;
        }
    }
    cout << endl;           //Salida por consola de la matiz ingresada

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(matriz[i][j]/104 >= 1){
                cout << matriz[i][j] << " ";
            }
            else{
                cout << " " << matriz[i][j] << " ";
            }
        }
        cout << endl;
    }
    if(ban==1){
        cout << "La matriz es magica" << endl;
    }
    else{
        cout << "La matriz no es magica" << endl;
    }
    return 0;
}
