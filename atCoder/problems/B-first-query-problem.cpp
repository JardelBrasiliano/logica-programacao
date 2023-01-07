// B - First Query Problem
// https://atcoder.jp/contests/abc283/tasks/abc283_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int v[n + 1];
  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }
  int q;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int a, b, c;
    cin >> a >> b;

    if (a == 1)
    {
      cin >> c;
      v[b] = c;
    }
    else
    {
      cout << v[b] << endl;
    }
  }

  return 0;
}