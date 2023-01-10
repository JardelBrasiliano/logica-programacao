// https://www.beecrowd.com.br/judge/pt/problems/view/1160

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a, b, constA, constB;
    double g1, g2;
    cin >> a >> b >> g1 >> g2;

    int year = -1;
    constA = a;
    constB = b;
    for (int i = 1; i <= 100; i++)
    {
      a = a + ((g1 / 100) * a);
      b = b + ((g2 / 100) * b);

      if (a > b)
      {
        year = i;
        break;
      }
    }

    if (year > 0)
    {
      cout << year << " anos.\n";
    }
    else
    {
      cout << "Mais de 1 seculo.\n";
    }
  }

  return 0;
}