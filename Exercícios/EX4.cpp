#include <iostream>
using namespace std;

int main(){

    int velocidade;
    int multa;
    cout << "Voce acabou de passar por um radar de velocidade, e melhor se informar!" << endl;
    cout << "Qual velocidade voce estava? ";
    cin >> velocidade;

    multa = velocidade - 80;
    multa = multa * 5;


    if(velocidade > 80){
        cout << "Voce foi multado por excesso de velocidade e pagara um multa no valor de R$" << multa << "." << endl;
    }else{
        cout << "Voce nao foi multado." << endl;
    }

    system ("pause");
    return 0;
}