#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> vectorcito(10,"Paul"); //crea un vector para que 10 veces se imprima paul
    vectorcito.push_back("Landaeta"); //al final pondra landaeta
    // ["paul","paul","paul","paul","paul","paul","paul","paul","paul","paul"]
    cout<<"tamaño del vector"<< vectorcito.size()<<endl; //impirime el tamanio del vector y llama al metodo size para que aparezca el numero 
    for(int i = 0 ; i < vectorcito.size() ; i++) {
    	cout<<i<<" "<< vectorcito[i]<<endl;
    }
    return 0;
}