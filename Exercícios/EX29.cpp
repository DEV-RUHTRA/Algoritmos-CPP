#include <bits/stdc++.h>
using namespace std;

struct veiculo{
    char marca[100];
    char modelo[100];
    char placa[100];
    char ano[10];
    float km;
    float valor;
};
int main(){

    veiculo c1,c2;
    cout << "Digite a marca do carro: "; cin.getline(c1.marca,100);
    cout << "Digite o modelo do carro: "; cin.getline(c1.modelo,100);
    cout << "Digite a placa do carro: "; cin.getline(c1.placa,100);
    cout << "Digite o ano do carro: "; cin >> c1.ano;
    cout << "Digite a kilometragem do caro: "; cin >> c1.km;
    cout << "Digite o valor do caroo: "; cin >> c1.valor;
    cout << endl;
    cout << "Digite a marca do carro: "; cin.getline(c2.marca,100);
    cout << "Digite o modelo do carro: "; cin.getline(c2.modelo,100);
    cout << "Digite a placa do carro: "; cin.getline(c2.placa,100);
    cout << "Digite o ano do caroo: "; cin >> c2.ano;
    cout << "Digite a kilometragem do caro: "; cin >> c2.km;
    cout << "Digite o valor do caroo: "; cin >> c2.valor;
    cout << "Marca: " << c1.marca << ". Modelo: " << c1.modelo << ". Placa " << c1.placa << ". Ano: " << c1.ano << ". KM: " << c1.km << ". valor: " << c1.valor << endl;
    

    return 0;
}