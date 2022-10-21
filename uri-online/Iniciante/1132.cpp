// Múltiplos de 13
// https://www.beecrowd.com.br/judge/pt/problems/view/1132

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a >> b;
  int sum = 0;
  for (int i = min(a, b); i <= max(a, b); i++)
  {
    if (i % 13 != 0)
    {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}