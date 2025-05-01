#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    cout << "Vamos fazer um contagem regressiva entre dois numeros!" << endl;
    cout << "Me diga o primeiro numero: ";
    cin >> n1;
    cout << "Me diga o segundo numero: ";
    cin >> n2;

    if (n1 < n2){
        while (n1 != n2){
            cout << n1 << " ";
            n1 = n1 + 1;
        }
        cout << n2 << " ";
    }
    else if (n1 > n2){
        while (n1 != n2){
            cout << n1 << " ";
            n1 = n1 - 1;
        }
        cout << n2 << " ";
    }
    else if (n1 == n2){
        cout << "Os valores sao iguais!" << endl;
    }

    system("pause");
    return 0;
}