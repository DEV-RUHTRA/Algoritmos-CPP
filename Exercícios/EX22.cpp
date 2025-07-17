#include <bits/stdc++.h>
using namespace std;

void codificacao(char str[]){
    char aux;
    int tam = strlen(str);

    if(tam%2 == 0){
        for(int i=0; str[i] != '\0'; i++){
            if(i%2 == 0){
                aux = str[i];
                str[i] = str[i+1];
                str[i+1] = aux;
            }
        }
    }else{
        int i = 0;
        while(i < tam-1){
            if(i%2 == 0){
                aux = str[i];
                str[i] = str[i+1];
                str[i+1] = aux;
                }
            i++;
        }
    }
}

int main(){
    char string[100];
    cin.getline(string,100);
    codificacao(string);
    cout << string << endl;
}