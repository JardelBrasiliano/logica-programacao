#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  while (true)
  {
    int cont = 0;
    cin >> n >> m;

    if (n == 0 && m == 0)
    {
      break;
    }
    int valor = m - n;

    if (valor >= 100)
    {
      valor = (valor - 100);
      cont++;
    }

    if (valor >= 50 && valor < 100)
    {
      valor = (valor - 50);
      cont++;
    }
    if (valor >= 20 && valor < 50)
    {
      valor = (valor - 20);
      cont++;
    }
    if (valor >= 10 && valor < 20)
    {
      valor = (valor - 10);
      cont++;
    }
    if (valor >= 10 && valor < 10)
    {
      valor = (valor - 10);
      cont++;
    }
    if (valor >= 5 && valor < 10)
    {
      valor = (valor - 5);
      cont++;
    }
    if (valor >= 2 && valor < 5)
    {
      valor = (valor - 2);
      cont++;
    }

    if (valor == 0 && cont == 2)
    {
      cout << "possible\n";
    }
    else
    {
      cout << "impossible\n";
    }
  }

  return 0;
}