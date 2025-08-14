#include <bits/stdc++.h>
using namespace std;

struct conjunto{
    float matriz1[4][4];
    float matriz2[4][4];
    float matriz3[4][4];
    float vetor1[16];
};

conjunto transposta(conjunto mv){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            mv.matriz2[j][i] = mv.matriz1[i][j];
        }
    }
    return mv;
}

conjunto matrizmult(conjunto mv){
    float maiorElemento = mv.matriz1[0][0];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mv.matriz1[i][j] > maiorElemento){
                maiorElemento = mv.matriz1[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for( int j=0;j<4;j++){
            mv.matriz3[i][j] = mv.matriz1[i][j] * maiorElemento;
        }
    }
    return mv;
}

conjunto preencheVetor(conjunto mv){
    int cont=0;

    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            mv.vetor1[cont] = mv.matriz1[j][k];
            cont++;
        }
    }
    return mv;
}

int main(){

    conjunto MV;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> MV.matriz1[i][j];
        }
    }
    MV = transposta(MV);
    MV = matrizmult(MV);
    MV = preencheVetor(MV);
    cout << "Matriz transposta: " << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << MV.matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriz multiplicada: " << endl;

        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << MV.matriz3[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Vetor da matriz:" << endl;
    for(int i=0;i<16;i++){
        cout << MV.vetor1[i] << " ";
    }

    return 0;
}