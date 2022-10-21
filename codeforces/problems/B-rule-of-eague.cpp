// B. Rule of League
// https://codeforces.com/problemset/problem/1733/B
// rating: 900

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, x, y;
  cin >> n >> x >> y;

  int aux;
  if (x > y)
  {
    aux = 1;
  }
  else
  {
    aux = 2;
  }

  int cont = 1;
  if ((min(x, y) == 0 && max(x, y) > 0) && ((n - 1) % max(x, y) == 0))
  {
    for (int i = 1; i <= n - 1; i++)
    {
      if (cont == max(x, y) + 1)
      {
        aux = i + 1;
        cont = 1;
      }
      cont++;
      cout << aux << " ";
    }
  }
  else
  {
    cout << -1 << endl;
    return;
  }
  cout << endl;
  return;
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
  // 4 0 1 -> 2 3 4
  // solve();

  return 0;
}