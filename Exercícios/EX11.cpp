#include <bits/stdc++.h>
using namespace std;
#define max 5

int main(){

    int vetor1[max], vetor2[max],vetor3[max];
    int soma = 0;

    for(int i = 0; i < max;i++){
        cin >> vetor1[i];
    }

    for(int i = 0; i < max;i++){
        cin >> vetor2[i];
    }

    for(int i = 0; i < max;i++){
        soma = vetor1[i] + vetor2[i];
        vetor3[i] = soma;
        cout << vetor3[i] << " ";
    }

    

    return 0;
}