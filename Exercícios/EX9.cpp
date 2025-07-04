#include <bits/stdc++.h>
using namespace std;
#define max 20

int main(){

    int numImpares[max]={0};
    int i = 0, cont = 0;

    while(numImpares[max-1] == 0){
        if(cont%2 != 0){
            numImpares[i] = cont;
            i++;
        }
        cont++;
    }

    for(int i = 0; i < max; i++){
        cout << numImpares[i] << " ";
    }

    return 0;
}