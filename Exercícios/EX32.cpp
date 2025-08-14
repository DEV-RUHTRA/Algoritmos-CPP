#include <bits/stdc++.h>
using namespace std;

struct vetor{
    float x;
    float y;
    float z;
};

vetor multMaiorElemento(vetor A, vetor B){
    float maiorElemento = B.x;
    if(B.y > maiorElemento){
        maiorElemento = B.y;
    }
    if(B.z > maiorElemento){
        maiorElemento = B.z;
    }
        A.x = A.x * maiorElemento;
        A.y = A.y * maiorElemento;
        A.z = A.z * maiorElemento;

    return A;
}
int main(){

    vetor A; vetor B;
    cin >> A.x; cin >> A.y; cin >> A.z;
    cin >> B.x; cin >> B.y; cin >> B.z;
    vetor C = multMaiorElemento(A,B);
    cout << "(" << C.x << "," << C.y << "," << C.z << ")" << endl;


    return 0;
}