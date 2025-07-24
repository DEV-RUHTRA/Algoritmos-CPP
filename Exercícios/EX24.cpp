#include <bits/stdc++.h>
using namespace std;

int main(){

    float matriz[4][2];

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}