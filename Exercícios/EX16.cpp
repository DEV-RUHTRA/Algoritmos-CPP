#include <bits/stdc++.h>
using namespace std;

int espacoBranco(char str[]){
    int tam = strlen(str);
    int cont = 0;

    for(int i =0;i<tam;i++){
        if(str[i] == ' '){
            cont++;
        }
    }
return cont;
}

int main(){

    char string[100];
    cin.getline(string,100);

    cout << "Espaços em branco = " << espacoBranco(string) << endl;
   

    return 0;
}