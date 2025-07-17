#include <bits/stdc++.h>
using namespace std;

int concatenacao(int vet1[],int vet2[],int vet3[],int tam1, int tam2){
    int indice = 0;

    for(int i=0;i<tam1;i++){
        if(vet1[i]%2 == 0){
            vet3[indice] = vet1[i];
            indice++;
        }
    }

    for(int i=0;i<tam2;i++){
        if(vet2[i]%2 == 0){
            vet3[indice] = vet2[i];
            indice++;
        }
    }

return indice;    
}

int main(){
    
    int tamanho1; cin >> tamanho1;
    int vetor1[tamanho1];
    for(int i=0;i<tamanho1;i++){
        cin >> vetor1[i];
    }

    int tamanho2; cin >> tamanho2;
    int vetor2[tamanho2];
    for(int i=0;i<tamanho2;i++){
        cin >> vetor2[i];
    }

    int vetor3[200];
    int tamanho3 = concatenacao(vetor1,vetor2,vetor3,tamanho1,tamanho2);

    for(int i=0;i<tamanho3;i++){
        cout << vetor3[i] << " ";
    }
    return 0;
}