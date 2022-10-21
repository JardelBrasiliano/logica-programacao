// https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve()
{
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int auxCin;
    cin >> auxCin;
    v.push_back(auxCin);
  }
  sort(v.begin(), v.end());

  cout << v[n - 1] - v[0] << endl;
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