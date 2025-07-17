#include <bits/stdc++.h>
using namespace std;

void vetorPositivo(float vet[],int tam){
    int num;
    int cont = 0;
    do{
        int i = 0;
        cin >> num;
            if(num > 0){
                vet[i] = num;
                cont++;
            }
        i++;
    }while(cont <= tam);
}

int main(){
    int tam = 6;
    float vetor[6];
    vetorPositivo(vetor,tam);
    for(int i =0;i<tam;i++){
        cout << vetor[i] << " ";
    }


    return 0;
}