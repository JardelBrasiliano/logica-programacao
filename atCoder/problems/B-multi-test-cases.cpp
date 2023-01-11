// B - Multi Test Cases
// https://atcoder.jp/contests/abc284/tasks/abc284_b

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  int odd = 0;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a % 2 != 0)
      odd++;
  }
  cout << odd << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;
  for (int i = 1; i <= tt; i++)
  {
    solve();
  }
  // solve();

  return 0;
}