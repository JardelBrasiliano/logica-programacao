#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, c, a1, b1, c1;
  int sum = 0;
  cin >> a >> b >> c >> a1 >> b1 >> c1;

  if (a < a1)
    sum += (a1 - a);

  if (b < b1)
    sum += (b1 - b);

  if (c < c1)
    sum += (c1 - c);

  cout << sum << endl;
  return 0;
}