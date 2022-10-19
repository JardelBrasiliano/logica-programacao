// Validação de Nota
// https://www.beecrowd.com.br/judge/pt/problems/view/1117

#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int loop = 0;
  double sum = 0;
  while (loop < 2)
  {
    double a;
    cin >> a;

    if (a < 0 || a > 10)
    {
      cout << "nota invalida\n";
    }
    else
    {
      loop++;
      sum += a;
    }
  }
  cout << fixed << setprecision(2);
  cout << "media = " << sum / 2 << endl;

  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}