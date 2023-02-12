#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  int n, s, r;
  cin >> n >> s >> r;

  int unit = ((s - r));
  int size = (n - 1);
  int total = s - unit;

  cout << unit << " ";

  for (int i = 1; i <= size; i++)
  {
    if (total - 6 >= size - i && 6 <= unit)
    {
      total -= 6;
      cout << 6 << " ";
    }
    else if (total - 5 >= size - i && 5 <= unit)
    {
      total -= 5;
      cout << 5 << " ";
    }
    else if (total - 4 >= size - i && 4 <= unit)
    {
      total -= 4;
      cout << 4 << " ";
    }
    else if (total - 3 >= size - i && 3 <= unit)
    {
      total -= 3;
      cout << 3 << " ";
    }
    else if (total - 2 >= size - i && 2 <= unit)
    {
      total -= 2;
      cout << 2 << " ";
    }
    else if (total - 1 >= size - i && 1 <= unit)
    {
      total -= 1;
      cout << 1 << " ";
    }
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
  // solve();

  return 0;
}