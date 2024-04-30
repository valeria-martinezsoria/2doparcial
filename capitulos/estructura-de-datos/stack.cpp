#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> pilita; //crea una pila con datos int y la llama pilita
    cout<<pilita.empty()<<endl; impirme si esta vacia o no
    
    pilita.push(10);
    cout<<pilita.empty()<<endl;
    cout<<pilita.top()<<endl;
    cout<<pilita.empty()<<endl;
    cout<<pilita.pop()<<endl;
    cout<<pilita.empty()<<endl;
} 