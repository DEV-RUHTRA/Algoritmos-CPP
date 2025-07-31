#include <bits/stdc++.h>
using namespace std;

struct medidas{
    float altura,peso;
};

struct ficha{
    char nome[100];
    char esporte[100];
    int idade;
    medidas medida;
};

int main(){
    ficha atleta;
    cout << "Qual seu nome: "; cin.getline(atleta.nome,100);
    cout << "Qual esporte praticado: "; cin.getline(atleta.esporte,100);
    cout << "Qual sua idade: "; cin >> atleta.idade;
    cout << "Qual sua altura: "; cin >> atleta.medida.altura;
    cout << "Qual seu peso: "; cin >> atleta.medida.peso;

    cout << atleta.nome << endl;
    cout << atleta.esporte << endl;
    cout << atleta.idade << endl;
    cout << atleta.medida.altura << endl;
    cout << atleta.medida.peso << endl;

    return 0;
}