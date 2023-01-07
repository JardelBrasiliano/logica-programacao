// Desafio de Bino
// https://www.beecrowd.com.br/judge/pt/problems/view/2060

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, v[5] = {2, 3, 4, 5}, vAux[5] = {0, 0, 0, 0};
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int c;
    cin >> c;
    for (int j = 0; j < 4; j++)
    {
      if (c % v[j] == 0)
      {
        vAux[j]++;
      }
    }
  }

  for (int i = 0; i < 4; i++)
  {
    cout << vAux[i] << " Multiplo(s) de " << v[i] << endl;
  }

  return 0;
}