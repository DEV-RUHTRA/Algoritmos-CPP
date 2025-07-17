#include <bits/stdc++.h>
using namespace std;

float media(float vet[],int tam){
    int soma = 0;
    for(int i =0; i<tam;i++){
        soma += vet[i];
    }
return soma/tam;
}

int main(){

    int tam = 6;
    float vetor[tam];
    for(int i=0;i<tam;i++){
        cin >> vetor[i];
    }
    cout << "Media igual = " << media(vetor,tam) << endl;
}
