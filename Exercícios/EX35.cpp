#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, soma = 0; cin >> n;
    int *ptvet = new int[n];

    for(int i=0;i<n;i++){
        cin >> ptvet[i];
        soma += ptvet[i];
    }

    cout << fixed << setprecision(2);
    cout << "Media igual a: " << soma/n << endl;
    delete []ptvet;


    return 0;
}