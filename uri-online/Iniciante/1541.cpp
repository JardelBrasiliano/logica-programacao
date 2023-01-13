#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true)
  {
    int a, b, c;
    cin >> a;
    if (a == 0)
      break;
    cin >> b;
    if (b == 0)
      break;
    cin >> c;
    if (c == 0)
      break;

    int area = a * b;
    double porcent = 100.0 / c;
    double total = sqrt(area * porcent);

    cout << trunc(total) << endl;
  }

  return 0;
}