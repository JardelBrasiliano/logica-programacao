// B. Matrix Rotations
// https://codeforces.com/problemset/problem/1772/B

#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
  int a, b, c, d;
  cin >> a >> b >> d >> c;

  for (int i = 0; i < 4; i++)
  {
    if (a > b && d > c && a > d && b > c)
    {
      cout << "YES\n";
      return;
    }
    int auxA = a;
    int auxB = b;
    int auxC = c;
    int auxD = d;

    b = auxA;
    c = auxB;
    d = auxC;
    a = auxD;
  }
  cout << "NO\n";
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