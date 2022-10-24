// Soma de Ímpares Consecutivos III
// https://www.beecrowd.com.br/judge/pt/problems/view/1158

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++)
  {
    int a, b;
    cin >> a >> b;

    int cont = 1;
    int sum = 0;
    while (cont <= b)
    {
      if (a % 2 != 0)
      {
        sum += a;
        cont++;
      }
      a++;
    }
    cout << sum << endl;
  }

  return 0;
}
