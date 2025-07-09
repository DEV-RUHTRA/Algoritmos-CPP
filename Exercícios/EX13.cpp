#include <bits/stdc++.h>
using namespace std;

int main(){
    int quantidade = 0,num;
    int vetor[100];
    int aux1,aux2,aux3;

    do{
        cin >> num;
        if(num < 0){
            break;
        }
        vetor[quantidade] = num;
        quantidade++;

    }while(quantidade <= 99 && num > 0);

    if(quantidade < 6){
        cout << "O vetor possui menos de 6 valores! A inversao das posicoes nao eh possivel!";
    }else{
        aux1 = vetor[0];
        aux2 = vetor[1];
        aux3 = vetor[2];

        vetor[0] = vetor[quantidade-1];
        vetor[1] = vetor[quantidade-2];
        vetor[2] = vetor[quantidade-3];

        vetor[quantidade-1] = aux1;
        vetor[quantidade-2] = aux2;
        vetor[quantidade-3] = aux3;

            for(int i=0;i<quantidade;i++){
                cout << vetor[i] << " ";
            }
    }


return 0;
}