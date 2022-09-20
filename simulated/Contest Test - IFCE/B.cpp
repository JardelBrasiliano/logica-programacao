#include<bits/stdc++.h>
#include<string>

using namespace std;



void solve() {
  int n;cin >> n;
  string entrada;cin >> entrada;
  
  int problemas[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0};
  
  int somaBalao = 0;
  for(int i = 0; i < n; i++) {
    int indexBalaoAtual = int(entrada[i]) - int('A');

    if(problemas[indexBalaoAtual] == 0) {
      somaBalao = somaBalao + 2;
      problemas[indexBalaoAtual]++;
    } else {
      somaBalao++;
    }
  }

  cout << somaBalao << endl;
  return;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}