#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string user1, user2;
    cin >> user1 >> user2;

    if (user1 == "ataque")
    {
      if (user2 == "pedra")
      {
        cout << "Jogador 1 venceu\n";
        continue;
      }
      if (user2 == "papel")
      {
        cout << "Jogador 1 venceu\n";
        continue;
      }
      if (user2 == "ataque")
      {
        cout << "Aniquilacao mutua\n";
        continue;
      }
      continue;
    }

    if (user1 == "pedra")
    {
      if (user2 == "papel")
      {
        cout << "Jogador 1 venceu\n";
        continue;
      }
      if (user2 == "ataque")
      {
        cout << "Jogador 2 venceu\n";
        continue;
      }
      if (user2 == "pedra")
      {
        cout << "Sem ganhador\n";
        continue;
      }
      continue;
    }

    if (user1 == "papel")
    {
      if (user2 == "ataque")
      {
        cout << "Jogador 2 venceu\n";
        continue;
      }
      if (user2 == "papel")
      {
        cout << "Ambos venceram\n";
        continue;
      }
      if (user2 == "pedra")
      {
        cout << "Jogador 2 venceu\n";
        continue;
      }
      continue;
    }
  }

  return 0;
}