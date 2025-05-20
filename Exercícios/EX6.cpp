#include <bits/stdc++.h>
using namespace std;

float soma (float a, float b){
    return  a+b;
}

int main (){
    float a, b; cin >> a >> b; //Float não é ideal para representar dinheiro! erro em casa decimais
    cout << fixed << setprecision(20);
    cout << soma (a,b) << endl;
}