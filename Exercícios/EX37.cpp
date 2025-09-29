#include <bits/stdc++.h>
using namespace std;

int* indicesPares(int n, int vet[]){

    int tam = n/2 + 1;
    int *ptr = new int[tam];
    int cont = 0;

    for(int i=0;i<n;i+=2){
        ptr[cont] = vet[i];
        cont++;
    }

    return ptr;

}


int main(){

    int n; cin >> n;
    int *pt = new int[n];

    for(int i=0;i<n;i++){
        cin >> pt[i];
    }

    pt = indicesPares(n,pt);

    cout << "Novo vetor:" << endl;
    for(int i=0;i<n/2 + 1;i++){
        cout << pt[i] << " ";
    }
    cout << endl;


    return 0;
}