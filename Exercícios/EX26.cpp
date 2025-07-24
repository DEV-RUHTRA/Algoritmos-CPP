#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3,m = 3; 
    float soma = 0, media = 0;
    
    float matriz[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            soma = soma + matriz[i][j];
            if(j == 2){
                cout << "Soma da linha "<< i <<" = "<< soma << endl;
            }
        }
        soma = 0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            media = media + matriz[j][i];
            if(j == 2){
                cout << "Media da coluna " << i << " = " << 1.0*media/n << endl;
            }
        }
        media = 0;
    }
    return 0;
}