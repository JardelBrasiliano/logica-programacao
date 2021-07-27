#include <iostream>
#include<string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, lista[10005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }

    for(int i = n-1; i >= 1; i--){
        cout << lista[i] << " ";
    }
    cout << lista[0] << endl;
    return 0;
}
