#include <bits/stdc++.h>
using namespace std;

int main(){

    int matriz[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}