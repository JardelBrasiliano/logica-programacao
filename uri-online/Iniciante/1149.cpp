// Somando Inteiros Consecutivos
// https://www.beecrowd.com.br/judge/pt/problems/view/1149

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n;

  int sum = 0;
  while (true)
  {
    cin >> m;
    if (m > 0)
    {
      for (int i = 0; i < m; i++)
      {
        sum += (n + i);
      }

      break;
    }
  }

  cout << sum << endl;
  return 0;
}