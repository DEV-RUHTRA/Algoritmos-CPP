#include <iostream>
using namespace std;

int main (){

    int numero;
    cout << "Bem-vindo a caixa de numeros. Aqui vamos verificar se seu numero e impar e negativo ou par e positivo!" << endl;
    cout <<"Digite um numero qualquer: ";
    cin >> numero;

    if(numero % 2 != 0 and numero < 0){
        cout << "O numero digitado e impar e negativo" << endl;
    }else if(numero % 2 == 0 and numero >= 0){
        cout << "O numero digitado e par e positvo" << endl;
    }else{
        cout << "O numero nao se encaixa em nenhum dos dois casos" << endl;
    }
    

    system("pause");
    return 0;
}
