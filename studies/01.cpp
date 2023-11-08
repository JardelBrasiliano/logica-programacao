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

  vector<int> v = {2, 4, 1, 16, 32};
  sort(v.begin(), v.end());

  int diffPa = v[1] - v[0];
  bool flagPa = true;

  for (int i = 1; i < v.size(); i++)
  {
    if ((v[i] - v[i - 1]) != diffPa)
    {
      flagPa = false;
    }
  }
  if (flagPa)
  {
    cout << "PA" << endl;
    return 0;
  }

  int diffPg = v[1] / v[0];
  bool flagPg = true;
  for (int i = 1; i < v.size(); i++)
  {
    if ((v[i] / v[i - 1]) != diffPg)
    {
      flagPg = false;
    }
  }
  if (flagPg)
  {
    cout << "PG" << endl;
    return 0;
  }

  cout << -1 << endl;
  return 0;
}