// A. Cowardly Rooks
// https://codeforces.com/problemset/problem/1749/A
// rating: 800

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int aux1, aux2;
    cin >> aux1 >> aux2;
  }

  if (n <= m)
  {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
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
  // solve();

  return 0;
}