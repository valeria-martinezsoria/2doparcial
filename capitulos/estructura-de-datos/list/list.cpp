#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    // input;
    output;
    list<int> listita;  //se crea una lista
    listita.push_back(1); //se la llena con esos valores
    listita.push_back(2);
    listita.push_back(3);
    list<int>::iterator it; //se crea un iterador para seguir las listas

    it = listita.end(); //iterador al final
    cout << *it << endl;
    
    for (it = listita.begin(); it != listita.end(); it++) { 
        cout << *it << endl;
    }

    return 0;
}