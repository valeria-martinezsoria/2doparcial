#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
   
    int numNodos; //poner numero de nodos
    std::cin >> numNodos;

    vector<int> grafo[numNodos]; // Lista de adyacencia para representar el grafo. 
    
    int numAristas;//poner numero de aristas
    cin >> numAristas;

    
    for (int i = 0; i < numAristas; i++) { //lee aristas y las pone en la matriz
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino;
        grafo[nodoOrigen].push_back(nodoDestino); //anadir en su lugar
    }

    for (int i = 0; i < numNodos; i++) { //impirmir lista de adyacencia
        for (int j = 0; j < grafo[i].size(); j++) {
            cout << "[" << grafo[i][j] << "]";
        }
        cout << std::endl;
    }

    return 0; 
}