#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;

  if (n % 2 == 0)
  {
    cout << 1 << " " << n / 2 << endl;
  }
  else
  {
    cout << -1 << endl;
  }

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