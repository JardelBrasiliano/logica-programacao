// B. Death's Blessing
// https://codeforces.com/problemset/problem/1749/B
// rating: 900

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  long long int vAux[n + 5];
  vector<pair<long long int, long long int>> v;

  for (int i = 0; i < n; i++)
  {
    cin >> vAux[i];
  }
  long long int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int valor;
    cin >> valor;
    v.push_back(make_pair(valor, vAux[i]));
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n - 1; i++)
  {
    sum += v[i].second;
    v[i + 1].second += v[i].first;
  }
  sum += v[n - 1].second;

  cout << sum << endl;
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