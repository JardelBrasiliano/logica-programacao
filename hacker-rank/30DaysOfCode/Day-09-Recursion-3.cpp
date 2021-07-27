#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int fatorial(int valor){
    if(valor == 1){
        return valor;
    }
    return valor * fatorial(valor - 1);
}

int main() {
    int calcular;

    cin >> calcular;
    cout << fatorial(calcular) << endl;
    return 0;
}
