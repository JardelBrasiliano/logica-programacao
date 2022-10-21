// A. Immobile Knight
// https://codeforces.com/problemset/problem/1739/A
// rating: 800

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  if (n <= 3 && m <= 3)
  {
    cout << (n / 2) + 1 << " " << (m / 2) + 1 << endl;
    return;
  }
  cout << 1 << " " << 1 << endl;
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

  return 0;
}