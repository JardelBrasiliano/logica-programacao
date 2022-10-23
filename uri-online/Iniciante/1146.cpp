// Sequências Crescentes
// https://www.beecrowd.com.br/judge/pt/problems/view/1146

#include <bits/stdc++.h>
using namespace std;

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

    for (int i = 1; i < n; i++)
    {
      cout << i << " ";
    }
    cout << n << "\n";
  }

  return 0;
}