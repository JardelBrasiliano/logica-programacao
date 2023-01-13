// https://www.beecrowd.com.br/judge/pt/problems/view/1924
// pega string em uma linha, pegar linha completa de uma string entra input getine

#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  string name = "";

  for (int i = 0; i < n; i++)
  {
    cin.ignore();
    getline(cin, name, '\n');
  }

  cout << "Ciencia da Computacao\n";

  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  solve();

  return 0;
}