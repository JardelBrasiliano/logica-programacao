#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    double pagamento;
    double gorgeta, imposto;

    cin >> pagamento;
    cin >> gorgeta;
    cin >> imposto;

    double tip = (gorgeta/100)*pagamento;
    double tax = (imposto/100)*pagamento;

    cout << fixed << setprecision(0) << pagamento + tip + tax << endl;

    return 0;
}

