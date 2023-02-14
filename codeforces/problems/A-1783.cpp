#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);

  int sum = 0;
  bool flag = true;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(v.rbegin(), v.rend());
  if (v.size() == 2 && v[0] == v[1])
  {
    cout << "NO\n";
    return;
  }
  else if (v[0] == v[1])
  {
    int sizeInd = v.size() - 1;
    int aux = v[1];
    v[1] = v[sizeInd];
    v[sizeInd] = aux;
  }

  for (int i = 0; i < n; i++)
  {
    if (sum == v[i])
    {
      flag = false;
    }
    sum += v[i];
  }

  if (flag)
  {
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
    return;
  }

  cout << "NO\n";

  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++)
  {
    solve();
  }

  return 0;
}