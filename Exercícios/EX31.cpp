#include <bits/stdc++.h>
using namespace std;

void ordenacao(float mat1[4][4], float mat2[4][4]){
    float maiorElemento = mat1[0][0];
    float vet[16] = {0};
    int cont = 0;

    for(int k=0;k<16;k++){
        for(int i=0;i<4;i++){
            for(int j=0;i<4;j++){
                if(mat1[i][j] > maiorElemento){
                    for(int l=0;l<cont;l++){
                        if(mat1[i][j] != vet[l]){
                            maiorElemento = mat1[i][j];
                            vet[cont] = mat1[i][j];
                        }
                    }
                }
            }
        }
        cont++;
    }
    cont = 0;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            mat2[i][j] = vet[cont];
            cont++;
        }
    }
}

int main(){

    float matriz[4][4];
    float matriz1[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}