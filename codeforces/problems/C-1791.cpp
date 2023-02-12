#include <bits/stdc++.h>
#include <vector>
#include <string>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }

  int indexLeft = 0;
  int indexRight = n - 1;
  int cont = n;

  for (int i = 0; i < n / 2; i++)
  {
    char pontLeft = (char)s[indexLeft];
    char pontRight = (char)s[indexRight];

    if (pontLeft == pontRight || indexLeft == indexRight)
    {
      break;
    }
    cont -= 2;
    indexLeft++;
    indexRight--;
  }
  cout << cont << endl;
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