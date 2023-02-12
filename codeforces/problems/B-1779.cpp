#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;

  if (n % 2 == 0)
  {
    cout << "YES\n";
    for (int i = 1; i <= n; i++)
    {
      int aux = 1;
      if (i % 2 == 0)
      {
        aux = -1;
      }
      cout << aux << " ";
    }
    cout << endl;
    return;
  }
  if (n < 5)
  {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  int rest = n / 2;
  for (int i = 1; i <= n; i++)
  {
    int aux1 = rest - 1;
    if (i % 2 == 0)
    {
      aux1 = -(rest);
    }
    cout << aux1 << " ";
  }
  cout << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++)
  {
    solve();
  }
  return 0;
}