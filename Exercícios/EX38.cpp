#include <bits/stdc++.h>
using namespace std;

int* redimensiona(int vet[],int n,int novo){

    if(novo <= n){
        return vet;
    }

    int *ptr = new int[novo];

    for(int i=0;i<novo;i++){
        if(i<=n){
            ptr[i] = vet[i];
        }else{
            ptr[i] = 0;
        }
    }

    return ptr;

}

int main(){

    cout << "Digite o tamanho do vetor: ";

    int n; cin >> n;
    int *pt = new int[n];
    for(int i=0;i<n;i++){
        cin >> pt[i];    
    } 

    cout << "Digite o tamanho do novo vetor: ";
    int novoN; cin >> novoN;

    pt = redimensiona(pt,n,novoN);

    cout << "Novo vetor: " << endl;
    for(int i=0;i<novoN;i++){
        cout << pt[i] << " ";
    }
    cout << endl;

    delete []pt;

    return 0;
}