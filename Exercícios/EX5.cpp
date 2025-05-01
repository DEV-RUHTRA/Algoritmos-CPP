#include <iostream>
using namespace std;

int main (){

    float aumento, valoraumento, salario, novosalario;

    cout << "Bem-vindo a calculadora de aumento! Me diga seu salario atual: ";
    cin >> salario;
    cout << "Me diga qual o valor do aumento que deseja em porcentagem [0-100]: ";
    cin >> aumento;
    aumento = aumento / 100;
    novosalario = salario + (salario * aumento);
    valoraumento = novosalario - salario;

    cout << "O seu novo salario e de R$" << novosalario << " e o aumento foi de R$" << valoraumento << "!" << endl;

    system ("pause");
    return 0;
}