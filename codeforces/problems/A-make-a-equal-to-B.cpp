// A. Make A Equal to B
// https://codeforces.com/problem/problem/1736/A
// rating: 800

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve()
{
  int n, contZeroX = 0, contZeroY = 0;
  cin >> n;
  vector<int> x(n), y(n);

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
    if (x[i] == 0)
    {
      contZeroX++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cin >> y[i];
    if (y[i] == 0)
    {
      contZeroY++;
    }
  }

  int res = 0;
  int dif = abs(contZeroX - contZeroY);

  for (int i = 0; i < n; i++)
  {
    if (x[i] != y[i])
    {
      if (dif)
      {
        dif--;
      }
      else
      {
        res++;
        break;
      }
    }
  }

  cout << res + abs(contZeroX - contZeroY) << endl;
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
  // solve();

  return 0;
}