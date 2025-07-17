#include <bits/stdc++.h>
using namespace std;

int procurando(int vet[],int tam,int x){
    for(int i=0;i<tam;i++){
        if(vet[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){

    int tam = 6;
    int vetor[tam];
    for(int i =0;i<tam;i++){
        cin >> vetor[i];
    }
    int x; cin >> x;
    cout << "Indice = " << procurando(vetor,tam,x) << endl;


    return 0;
}