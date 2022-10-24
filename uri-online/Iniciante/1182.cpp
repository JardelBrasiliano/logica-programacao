// Coluna na Matriz
// https://www.beecrowd.com.br/judge/pt/problems/view/182

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char c;
  int n;
  cin >> n >> c;

  int index = 0;
  double sum = 0;
  for (int i = 0; i < 144; i++)
  {
    double auxCin;
    cin >> auxCin;

    if (index == n)
    {
      sum += auxCin;
    }
    index++;
    if (index == 12)
    {
      index = 0;
    }
  }
  cout << fixed << setprecision(1);
  if (c == 'M')
  {
    cout << (double)sum / 12 << endl;
    return 0;
  }
  cout << sum << endl;

  return 0;
}