// Acima da Diagonal Principal
// https://www.beecrowd.com.br/judge/pt/problems/view/1183

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char c;

  cin >> c;

  double sum = 0;
  int cont = 0;
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      double auxCin;
      cin >> auxCin;
      if (j > i)
      {
        cont++;
        sum += auxCin;
      }
    }
  }

  cout << fixed << setprecision(1);
  if (c == 'M')
  {
    cout << (double)sum / cont << endl;
    return 0;
  }
  cout << sum << endl;

  return 0;
}