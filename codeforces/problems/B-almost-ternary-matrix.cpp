// B. Almost Ternary Matrix
// https://codeforces.com/problemset/problem/1699/B
// rating: 900
// Pedding

#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  bool impar = false;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (impar && j % 2 != 0)
      {
        cout << 1 << " ";
      }
      else if (impar && j % 2 == 0)
      {
        cout << 0 << " ";
      }
      else if (!impar && j % 2 == 0)
      {
        cout << 1 << " ";
      }
      else
      {
        cout << 0 << " ";
      }
    }
    cout << endl;
    impar = !impar;
  }
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