// Resto da Divisão
// https://www.beecrowd.com.br/judge/pt/problems/view/1133

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a >> b;

  for (int i = min(a, b) + 1; i < max(a, b); i++)
  {
    int res = i % 5;
    if (res == 2 || res == 3)
    {
      cout << i << endl;
    }
  }

  return 0;
}