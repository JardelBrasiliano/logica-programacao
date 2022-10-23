// A. Burenka Plays with Fractions
// https://codeforces.com/problemset/problem/1720/A
// rating: 900

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void solve()
{
  double a, b, c, d;
  cin >> a >> b >> c >> d;

  double resultAB = a / b;
  double resultCD = c / d;

  double aux1Double, aux2Double;
  long long int aux1, aux2;

  int result = 2;
  if (resultAB == resultCD)
  {
    cout << 0 << endl;
  }
  else
  {
    aux1Double = double(c * b) / double(a * d);
    aux1 = aux1Double;

    aux2Double = double(a * d) / double(c * b);
    aux2 = aux2Double;

    if (aux1 == aux1Double)
    {
      result--;
    }
    if (aux2 == aux2Double)
    {
      result--;
    }

    cout << result << endl;
  }
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