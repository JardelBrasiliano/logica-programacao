#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int binary(int valor){
    int resto[1000], aux = 0, valorResto;
    int maior = 0, auxMaior = 0;
    do {
        valorResto = valor % 2;
        valor = valor/2;
        resto[aux++] = valorResto;

        if(valorResto == 1){
            auxMaior++;
        }else if(valorResto == 0){
            if(auxMaior > maior){
                maior = auxMaior;
            }
            auxMaior = 0;
        }
    } while(valor);
    if(auxMaior > maior){
        maior = auxMaior;
    }
    return maior;
}

int main() {
    int calcular;

    cin >> calcular;
    cout << binary(calcular) << endl;
    return 0;
}
