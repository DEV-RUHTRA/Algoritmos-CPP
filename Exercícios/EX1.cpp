/*
Escreva uma funcao que receba um valor inteiro N (seja positivo) e retorne a soma de todos os ńumeros
ımpares de 1 ate N. Para essa questao nao  ́e necessario fazer funcao principal (main).

Exemplos:
Entrada Saıda
10 25
30 225
*/
#include <iostream>
using namespace std;

int main (){

    int n1; cin >> n1;
    int soma = 0;
    
    if(n1 % 2 != 0){ //Numero impar

        for (int i = 1; i <= n1; i+=2){
            soma = soma + i;
        }
        cout << soma << endl;

    }else{ // numero par
        
        for(int i = 1; i <n1 ;i+=2){
            soma = soma + i;
        }
        cout << soma << endl;
    } 
    return 0;
}
