// B - Line Sensor
// https://atcoder.jp/contests/abc274/tasks/abc274_b

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a, b;
  cin >> a >> b;
  int v[b + 10];

  for (int i = 0; i < b; i++)
  {
    v[i] = 0;
  }

  int aux = 0;
  for (int i = 0; i < a; i++)
  {
    for (int i = 0; i < b; i++)
    {
      char auxCin;
      cin >> auxCin;
      if (auxCin == '#')
      {
        v[i]++;
      }
    }
  }

  for (int i = 0; i < b; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  solve();

  return 0;
}