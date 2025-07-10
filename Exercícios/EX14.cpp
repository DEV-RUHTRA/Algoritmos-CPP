#include <bits/stdc++.h>
using namespace std;

int main(){

    char string[100];
    cin.getline(string,100);
    int cont = 0;

    for(int i=0; string[i] != '\0';i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i'|| string[i] == 'o'|| string[i] == 'i'){
            cont++;
        }
    }

    cout << "Vogais = " << cont << endl;

    return 0;
}