// A - A Recursive Function
// https://atcoder.jp/contests/abc273/tasks/abc273_a

#include <bits/stdc++.h>

using namespace std;

int recur(int a)
{
  if (a == 0)
  {
    return 1;
  }

  return recur(a - 1) * a;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  cout << recur(n) << endl;

  return 0;
}