// A - Batting Average
// https://atcoder.jp/contests/abc274/tasks/abc274_a

#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve()
{
  double a, b;
  cin >> a >> b;

  cout << fixed << setprecision(3);
  cout << b / a << endl;
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