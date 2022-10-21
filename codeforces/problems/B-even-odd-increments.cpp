// https://codeforces.com/problemset/problem/1744/B

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, q;
  cin >> n >> q;
  long long int v[n + 10];

  long long int contImpar = 0;
  long long int contPar = 0;
  long long int sumTotal = 0;
  for (int i = 0; i < n; i++)
  {
    long long int auxCin;
    cin >> auxCin;
    sumTotal += auxCin;
    v[i] = auxCin;

    if (auxCin % 2 == 0)
    {
      contPar++;
    }
    else
    {
      contImpar++;
    }
  }

  long long int vTwo[q + 5];

  for (int i = 0; i < q; i++)
  {
    int auxCinOne;
    long long int auxCin;
    cin >> auxCinOne;
    cin >> auxCin;

    if (auxCinOne == 0)
    {
      cout << sumTotal + (auxCin * contPar) << endl;
      sumTotal += (auxCin * contPar);
      if (auxCin % 2 != 0)
      {
        contImpar += contPar;
        contPar = 0;
      }
    }
    else
    {
      cout << sumTotal + (auxCin * contImpar) << endl;
      sumTotal += (auxCin * contImpar);
      if (auxCin % 2 != 0)
      {
        contPar += contImpar;
        contImpar = 0;
      }
    }
  }

  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    solve();
  }
  // solve();
  return 0;
}