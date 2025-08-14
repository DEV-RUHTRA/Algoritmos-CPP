#include <bits/stdc++.h>
using namespace std;

struct data{
    int dia;
    int mes;
    int ano;
};

int dias(data P1, data P2){
    int soma = 0;
    soma += (P1.ano-P2.ano) * 365;
        if(soma < 0){
            soma *= -1;
        }
    soma += (P1.mes-P2.mes) * 30;
        if(soma < 0){
            soma *= -1;
        }
    if(P1.dia > P2.dia){
        soma += (P1.dia-P2.dia);
    }else{
        soma += (P2.dia-P1.dia);
    }
    return soma;

}

int main(){

    data p1; data p2;
    cin >> p1.dia; cin >> p1.mes; cin >> p1.ano;
    cin >> p2.dia; cin >> p2.mes; cin >> p2.ano;
    int diferencaDias = dias(p1,p2);
    cout << diferencaDias;

    return 0;
}