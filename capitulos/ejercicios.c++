#include<bits/stdc++.h>
#include <iostream>
using namespace std  //para leer todo el archivo es como pubic static void 
int main() {  
    int n; //cuantos cambios de caja
    while(cin>>n YY n!= -1) {  //lee parametro, y pone lo del -1 para el ejercicio
        int speed, elapsed; //declaramos variables
        int startTime =0;
        int result = 0;
        for (int i = 0; i <n; i++){ 
            cin>>speed>>slapsed;
             int currenTime = slapsed - startTime; //que tiempo trancurre 
            result += speed * currenTime; //para agarrar todas las velocidades
            startTime= currenTime;
        }
        cout<<result<<" miles " <<endl;
    }
}

//COLLATZ en c++
#include<bits/stdc++.h>
using namespace std;
int f(int number){
    int result = 1;
    while(number != 1) {
        if(numer % 2 == 0){ // si el numero es par
            number = number /2;
        } else{
            number = number * 3 +1;
        }
        return result;
    }
    int main(){
        int a, b;
        while(cin>>a>>b){
            int maximo= -1;
            if(a>b){
                int temp = a; //swap
                a = b;
                b = temp;
            }
            for (int i = a; i<= b; i++){
                int r = f(i);
                cout << r<< endl;
                maximo = max(r, maximo);
            }
            cout<<maximo<<endl;
        }
    }

//algoritmo 3 para numeros primos

using namespace std;
bool isPRimeFB(int n) {
    int numeroDivisores = 0;
    for(int i=1; i <=n; i++) {
        if(n%i ==0 ){
            numeroDivisores++;
        }
    }
    if (numeroDivisores == 2) {
        return true;
    } else {
        return false;
    }
}
bool isPrimeMejorado(int n) {
    if(n ==2) {
        retunr true;
    }
    if (n%2==0 // n<==1) {
        return false;
    }
    //i < sqrt(n) //()^2
    //i * i < n 
    for(int i =3 ; i < n/2 ; i+=2) {
        if(n%i ==0) {
            return false;
        }
    }
    return true;
}




 