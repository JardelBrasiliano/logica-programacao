// https://codeforces.com/problemset/problem/1735/B
// NAO DEU

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  long long int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  long long int x = 2 * v[0] - 1;
  for (int i = 1; i < n; i++)
  {
    ans += (v[i] / x);
    if (v[i] % x == 0)
      ans--;
  }
  cout << ans << endl;
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