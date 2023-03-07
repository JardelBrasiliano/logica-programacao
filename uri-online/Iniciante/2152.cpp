#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++)
  {

    int h, m, flag;

    cin >> h >> m >> flag;

    printf("%02d:%02d", h, m);

    if (flag == 1)
    {
      cout << " - A porta abriu!\n";
    }
    else
    {
      cout << " - A porta fechou!\n";
    }
  }

  return 0;
}