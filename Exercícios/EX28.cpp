#include <bits/stdc++.h>
using namespace std;

struct medidas{
    float peso;
    float altura;
};

int main(){

    medidas joao, maria;

    joao.altura = 1.78;
    maria.altura = 1.64;
    joao.peso = 75;
    maria.peso = 59;
    
    cout << "Media das alturas igual = " <<  (joao.altura + maria.altura)/2 << endl;
    cout << "Media do peso igual = " << (joao.peso + maria.peso)/2 << endl;

    return 0;
}