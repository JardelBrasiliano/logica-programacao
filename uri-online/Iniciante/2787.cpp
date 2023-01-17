#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int c, l;
  cin >> c >> l;

  if (c % 2 != 0)
  {
    if (l % 2 != 0)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
  else
  {
    if (l % 2 != 0)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << 1 << endl;
    }
  }

  return 0;
}