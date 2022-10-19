// Soma de Ímpares Consecutivos II
// https://www.beecrowd.com.br/judge/pt/problems/view/1099

#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int a, b;
  cin >> a >> b;

  int sum = 0;
  for (int i = min(a, b) + 1; i < max(a, b); i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }

  cout << sum << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;
  {
    for (int i = 0; i < tt; i++)
    {
      solve();
    }
  }

  return 0;
}