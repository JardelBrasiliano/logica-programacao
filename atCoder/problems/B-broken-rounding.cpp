// B - Broken Rounding
// https://atcoder.jp/contests/abc273/tasks/abc273_b
// fail

#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  long long int valor;
  cin >> valor >> n;

  if (valor < n)
  {
    cout << 0 << endl;
    return 0;
  }

  long long int aux = 1;
  for (int i = 1; i <= n; i++)
  {
    aux *= 10;
    int metade = aux / 2;
    int parteUm = valor % aux;
    cout << "parteUm: " << valor << " = " << parteUm << endl;

    if (parteUm >= metade)
    {
      valor += (aux - parteUm);
    }
    else
    {
      valor += aux;
    }
  }
  cout << valor << endl;

  return 0;
}