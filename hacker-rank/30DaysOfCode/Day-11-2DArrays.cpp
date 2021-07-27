#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <limits.h>>

using namespace std;

void ImprimirLista(int valor[6][6]){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << valor[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int lista2D[6][6];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> lista2D[i][j];
        }
    }
    int soma = INT_MIN, auxSoma = 0;

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            auxSoma = lista2D[i][j] +
                (lista2D[i - 1][j] + lista2D[i - 1][j + 1] + lista2D[i - 1][j - 1]) +
                (lista2D[i + 1][j] + lista2D[i + 1][j + 1] + lista2D[i + 1][j - 1]);
            if(auxSoma > soma){
                soma = auxSoma;
            }
        }
    }
    if(auxSoma > soma){
        soma = auxSoma;
    }
    cout << soma << endl;
    return 0;
}
