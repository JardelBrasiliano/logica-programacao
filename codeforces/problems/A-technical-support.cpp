// A. Technical Support
//  https://codeforces.com/problemset/problem/1754/A
// rating: 800

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  int contQ = 0;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    if (c == 'Q')
      contQ++;
    if (c == 'A' && contQ > 0)
      contQ--;
  }

  if (contQ <= 0)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
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