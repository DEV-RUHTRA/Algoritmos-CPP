#include <bits/stdc++.h>
using namespace std;

int main(){

    float res;
    res = 0.1 + 0.2; // float não é ideal para representar dinheiro, ja que, possui erros em casas decimais
    cout << fixed << setprecision(20);
    cout << res << endl;
}