#include <bits/stdc++.h>
using namespace std;

void soletrando(char str[]){
    int tam = strlen(str);

    for(int i=0;i<tam;i++){
        cout << str[i] << "-"; 
    }
}

int main(){

    char string[100];
    cin.getline(string,100);
    soletrando(string);


    return 0;
}