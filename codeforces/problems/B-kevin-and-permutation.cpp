// B. Kevin and Permutation
// https://codeforces.com/problemset/problem/1754/B
// rating: 800

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  if (n <= 3)
  {
    for (int i = 1; i <= n; i++)
    {
      cout << i << " ";
    }
    cout << endl;
    return;
  }
  int inicial = (n / 2) + 1;
  int segundo = 1;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      cout << (inicial++) << " ";
    }
    else
    {
      cout << segundo++ << " ";
    }
  }
  cout << endl;

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