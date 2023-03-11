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

  double n, r = 0.0;
  cin >> n;
  while (n--)
    r += 2.0, r = 1.0 / r;

  r += 1.0;
  cout << fixed << setprecision(10);
  cout << r << endl;
  return 0;
}