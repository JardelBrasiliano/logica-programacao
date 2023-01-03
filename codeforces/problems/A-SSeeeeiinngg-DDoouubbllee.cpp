// A. SSeeeeiinngg DDoouubbllee
// https://codeforces.com/problemset/problem/1758/A
// rating: 800

#include <bits/stdc++.h>
#include <algorithm>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  string entrada;
  cin >> entrada;
  cout << entrada << "";

  int entradaSize = entrada.length();
  for (int i = entradaSize - 1; i >= 0; i--)
  {
    cout << entrada[i] << "";
  }
  cout << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    solve();
  }

  return 0;
}