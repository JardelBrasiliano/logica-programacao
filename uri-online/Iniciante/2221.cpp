#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

void soved()
{
  int bonus;
  cin >> bonus;

  int atq1, def1, lvl1;
  cin >> atq1 >> def1 >> lvl1;

  int addBonus1 = lvl1 % 2 == 0 ? bonus : 0;
  int player1 = ((atq1 + def1) / 2) + addBonus1;

  int atq2, def2, lvl2;
  cin >> atq2 >> def2 >> lvl2;

  int addBonus2 = lvl2 % 2 == 0 ? bonus : 0;
  int player2 = ((atq2 + def2) / 2) + addBonus2;

  if (player1 == player2)
  {
    cout << "Empate\n";
  }
  else if (player1 > player2)
  {
    cout << "Dabriel\n";
  }
  else
  {
    cout << "Guarte\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;
  for (int i = 0; i < tt; i++)
  {
    soved();
  }

  return 0;
}