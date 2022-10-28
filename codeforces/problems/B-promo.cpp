// B. Promo
// https://codeforces.com/problemset/problem/1697/B
// rating: 900

#include <bits/stdc++.h>
#include <vector>

#define ll long long

using namespace std;

void solve()
{
  int n, q;
  cin >> n >> q;
  vector<ll> v(n), s(n + 1);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n; ++i)
    s[i + 1] = s[i] + v[i];

  while (q--)
  {
    int x, y;
    cin >> x >> y;
    cout << s[n - x + y] - s[n - x] << '\n';
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int n;
  // cin >> n;

  // for (int i = 0; i < n; i++)
  // {
  //   solve();
  // }
  solve();

  return 0;
}