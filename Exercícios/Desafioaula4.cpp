#include <bits/stdc++.h>
using namespace std;

float Tarifa(float min, float prefixo){
    float res;
    if(prefixo == 54 || prefixo == 598 || prefixo == 595 || prefixo == 56){
        res = min * 1.90;
    }else{
        if(prefixo == 49 || prefixo == 33 || prefixo == 44){
            res = min * 2.00;
        }else{
            if(prefixo == 1){
                res = min * 2.10;
            }else{
                res = min * 2.30;
            }   
        }
    }
return res;    
}

float Tarifaplus(float min, int prefixo){
    float res;
    if(prefixo == 54 || prefixo == 598 || prefixo == 595 || prefixo == 56){
        res = min * 1.805;
    }else{
        if(prefixo == 49 || prefixo == 33 || prefixo == 44){
            res = min * 1.9;
        }else{
            if(prefixo == 1){
                res = min * 1.995;
            }else{
                res = min * 2.185;
            }   
        }
    }
return res;
}
int main(){
    int segundos,prefixo; float  min, minplus, tarifaplus,tarifacomun;
    cout << "Vamos calcular a tarifa da sua ligação!" << endl;
    cout << "Digite os segundos da sua ligação: ";
    cin >> segundos;
    cout << "Digite o prefixo utilizado: ";
    cin >> prefixo;
    min = segundos/60.0;
        if(min <= 5){
            tarifacomun = Tarifa(min,prefixo);
            cout << fixed << setprecision(2);
            cout << "R$" << tarifacomun << endl;
        }else{
            tarifacomun = Tarifa(min,prefixo);
            minplus = min - 5;
            tarifaplus  = Tarifaplus(minplus,prefixo);
            cout << fixed << setprecision(2);
            cout << "R$" << tarifacomun+tarifaplus << endl;
            
        }
    return 0;
}