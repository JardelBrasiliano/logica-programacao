// Soma de Pares Consecutivos
// https://www.beecrowd.com.br/judge/pt/problems/view/1159

#include <bits/stdc++.h>
using namespace std;

int sumPar(int a)
{
  int cont = 0;
  int sum = 0;
  while (cont < 5)
  {
    if (a % 2 == 0)
    {
      sum += a;
      cont++;
    }
    a++;
  }

  return sum;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true)
  {
    int n;
    cin >> n;

    if (n == 0)
    {
      break;
    }
    cout << sumPar(n) << endl;
  }

  return 0;
}
