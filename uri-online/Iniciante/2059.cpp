#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int parOuImpar, j1, j2, r1, a2;
  cin >> parOuImpar >> j1 >> j2 >> r1 >> a2;

  if (r1 == 0 && a2 == 0)
  {
    if (parOuImpar == 1 && (j1 + j2) % 2 == 0 || parOuImpar == 0 && (j1 + j2) % 2 != 0)
    {
      cout << "Jogador 1 ganha!\n";
    }
    else
    {
      cout << "Jogador 2 ganha!\n";
    }
    return 0;
  }

  if (r1 == 1 && a2 == 1)
  {
    cout << "Jogador 2 ganha!\n";
    return 0;
  }

  if (a2 == 0 && r1 == 1)
  {
    cout << "Jogador 1 ganha!\n";
    return 0;
  }

  if (a2 == 1 && r1 == 0)
  {
    cout << "Jogador 1 ganha!\n";
    return 0;
  }

  return 0;
}