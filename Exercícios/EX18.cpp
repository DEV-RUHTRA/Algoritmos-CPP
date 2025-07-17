#include <bits/stdc++.h>
using namespace std;

int somaVetor(int vet[],int tam){
    int soma = 0;
    for(int i =0;i<tam;i++){
        soma += vet[i];
    }
return soma;
}

int main(){
    int tam = 6;
    int vetor[tam];
    for(int i = 0;i < tam;i++){
        cin >> vetor[i];
    }
    cout << somaVetor(vetor,tam) << endl;


    return 0;
}