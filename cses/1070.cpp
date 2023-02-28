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

  int n;
  cin >> n;

  if (n < 4 && n != 1)
  {
    cout << "NO SOLUTION\n";
    return 0;
  }

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << " ";
    }
  }

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}