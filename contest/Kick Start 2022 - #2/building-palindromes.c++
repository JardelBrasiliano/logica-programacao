// RESULT - TEST 01 - ok ; TESTE 02 - TLE
#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; tc++) {
    int list[100], currentValue, contSobrando = 0, inicio, termino, cont = 0;
    int N, Q;
    cin >> N >> Q;

    string blockCharacters;
    cin >> blockCharacters;


    for (int i = 0; i < Q; i++) {
      contSobrando = 0;
      cin >> inicio >> termino;
      memset(list, 0, sizeof list);
      for (int j = inicio-1; j < termino; j++) {
        currentValue = blockCharacters[j];

        if (list[currentValue] == 0) {
          list[currentValue]++;
          contSobrando++;
        } else if (list[currentValue] == 1) {
          list[currentValue]--;
          contSobrando--;
        }
      }

      if (contSobrando <= 1) cont++;
    }

    cout << "Case #" << tc << ": " << cont << endl;
  }
  return 0;
}