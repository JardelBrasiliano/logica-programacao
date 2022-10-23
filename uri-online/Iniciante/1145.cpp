// Sequência Lógica 2
// https://www.beecrowd.com.br/judge/pt/problems/view/1145

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  cin >> x >> y;

  int aux = 1;
  for (int i = 1; i <= y; i++)
  {
    cout << i;

    if (aux == x || i == y)
    {
      cout << endl;
      aux = 1;
    }
    else
    {
      cout << " ";
      aux++;
    }
  }

  return 0;
}