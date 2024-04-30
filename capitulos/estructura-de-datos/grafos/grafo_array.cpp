#include<bits/stdc++.h>

#include<iostream>

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

using namespace std;
int main() {
    input;
    output;
    int numNodos; //se le pide al usuario el numero de nodos y se los lee
    cin >> numNodos;

    int grafo[numNodos][numNodos]; //se crea matriz adyacente
    memset(grafo, 0, sizeof(grafo));

    int numAristas; //crar numero de aristas y leerlas
    cin >> numAristas;

    for (int i = 0; i < numAristas; i++) { //lee aristas y las pone en la matriz
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino;
        grafo[nodoOrigen][nodoDestino] = 1; //ponerla desde la posicion 1
    }
    for (int i = 0; i < numNodos; i++) { //impirmir matriz
        for (int j = 0; j < numNodos; j++) {
            cout << "[" << grafo[i][j] << "]";
        }
        cout << endl;
    }

    return 0; 
}