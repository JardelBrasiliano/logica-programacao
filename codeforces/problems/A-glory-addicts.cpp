// A. Glory Addicts
// https://codeforces.com/problemset/problem/1738/A
// rating: 800

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> valores(n), tipoPoder(n);
  for (int i = 0; i < n; ++i)
    cin >> tipoPoder[i];
  for (int i = 0; i < n; ++i)
    cin >> valores[i];

  vector<vector<long long>> v(2);
  for (int i = 0; i < n; ++i)
    v[tipoPoder[i]].push_back(valores[i]);
  for (int i = 0; i < 2; ++i)
    sort(v[i].begin(), v[i].end());

  long long res = 0;
  if (v[0].size() == v[1].size())
  {
    res -= min(v[0].front(), v[1].front());
  }

  while (!v[0].empty() && !v[1].empty())
  {
    res += (v[0].back() + v[1].back()) * 2;
    v[0].pop_back();
    v[1].pop_back();
  }

  for (auto x : v[0])
    res += x;
  for (auto x : v[1])
    res += x;
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