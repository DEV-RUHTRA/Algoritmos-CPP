#include <bits/stdc++.h>
using namespace std;
#define max 5
int main(){

    int menorVal[max];

    for(int i = 0;i<max;i++){
        cin >> menorVal[i];
    }

    int menorvalor = menorVal[0];

    for(int i = 1; i < max;i++){
        if(menorVal[i] < menorvalor){
            menorvalor = menorVal[i];
        }
    }
    
    cout << "Menor valor: " << menorvalor << endl;

    return 0;
}