// A. Working Week
// https://codeforces.com/problemset/problem/1735/A
// rating: 800

#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;
  ll int res = floor((double)((n - 3) / 3)) - 1;
  cout << res << endl;

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