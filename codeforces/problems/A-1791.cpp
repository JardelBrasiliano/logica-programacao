#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int x = 0;
  int y = 0;

  for (int i = 0; i < n; i++)
  {
    char currentC = s[i];
    if (currentC == 'L')
      x -= 1;
    if (currentC == 'R')
      x += 1;
    if (currentC == 'U')
      y += 1;
    if (currentC == 'D')
      y -= 1;

    if (x == 1 && y == 1)
    {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
  return;
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