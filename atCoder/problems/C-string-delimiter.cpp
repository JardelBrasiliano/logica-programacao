// C - String Delimiter
// https://atcoder.jp/contests/abc282/tasks/abc282_c

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  bool flag = true;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (flag && c == ',')
      c = '.';

    if (c == '"')
      flag = !flag;

    cout << c;
  }
  cout << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int tt;
  // cin >> tt;
  // for (int i = 1; i <= tt; i++)
  // {
  //   solve();
  // }
  solve();

  return 0;
}