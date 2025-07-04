#include <bits/stdc++.h>
using namespace std;
#define max 5
int main(){

    float media[max];
    float soma = 0;

    for(int i = 0; i < max;i++){
        cin >> media[i];
    }
    for(int i = 0; i < max;i++){
        soma += media[i];
    }

    cout << soma << endl;

    return 0;
}