// A Corrida de Lesmas
// https://www.beecrowd.com.br/judge/pt/problems/view/1789

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, v;

  while (cin >> n)
  {
    int auxMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      int v;
      cin >> v;
      auxMax = max(auxMax, v);
    }
    int r = 3;
    if (auxMax < 10)
    {
      r = 1;
    }
    if (auxMax >= 10 && auxMax < 20)
    {
      r = 2;
    }

    cout << r << endl;
  }
  return 0;
}