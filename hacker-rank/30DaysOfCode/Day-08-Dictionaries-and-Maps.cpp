#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;


int main() {
    int n, numero;
    string name, buscar;
    map<string, int> listaTelefonica;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name;
        cin >> numero;
        listaTelefonica.insert(pair<std::string, int>(name, numero));
    }
    fflush(stdin);
    while(cin >> name) {
    if (listaTelefonica.find(name) != listaTelefonica.end()) {
        cout << name << "=" << listaTelefonica.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}

    return 0;
}
