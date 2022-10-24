// Matriz 123
// https://www.beecrowd.com.br/judge/pt/problems/view/1534

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  while (scanf("%d", &n) != EOF)
  {
    int meio = n / 2;
    int ultimo = n;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == meio && j == meio && n % 2 == 0)
        {
          cout << "1";
        }
        else if (i == meio && j == meio && n % 2 != 0)
        {
          cout << "2";
        }
        else if (j == i)
        {
          cout << "1";
        }
        else if (j == (ultimo - 1))
        {
          cout << "2";
        }
        else
        {
          cout << "3";
        }
      }
      ultimo--;
      cout << endl;
    }
  }

  return 0;
}
