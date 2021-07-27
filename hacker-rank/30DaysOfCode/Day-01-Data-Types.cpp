#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4, entradaInt;
    double d = 4.0, entradaDouble;
    string s = "HackerRank ", entradaString;

    cin >> entradaInt;
    cin >> entradaDouble;
    getline(cin >> ws, entradaString);

    cout << (i + entradaInt) << endl;
    cout << fixed << setprecision(1) << entradaDouble + d << endl;
    cout << (s + entradaString) << endl;

    return 0;
}
