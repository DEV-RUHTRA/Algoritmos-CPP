#include <bits/stdc++.h>
using namespace std;

float prodEscalar(int n, float ptv1[], float ptv2[]){
    float prodEscalar = 0;
    for(int i=0;i<n;i++){
        prodEscalar += ptv1[i] * ptv2[i];
    }
    return prodEscalar;
}

int main(){

    int n; cin >> n;
    float *ptvet1 = new float[n];
    float *ptvet2 = new float[n];
    
    cout << "Digite os valores do primeiro vetor: ";
    for(int i=0;i<n;i++){
        cin >> ptvet1[i];
    }

    cout << "Digite os valores do segundo vetor: ";
    for(int i=0;i<n;i++){
        cin >> ptvet2[i];
    }
    cout << fixed << setprecision(2);
    cout << "Produto Escalar = " << prodEscalar(n,ptvet1,ptvet2) << endl;

    delete []ptvet1;
    delete []ptvet2;




    return 0;
}