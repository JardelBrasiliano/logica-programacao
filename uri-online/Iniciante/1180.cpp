// Menor e Posição
// https://www.beecrowd.com.br/judge/pt/problems/view/1180

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, index = 0;
  cin >> n;
  int miNum = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    int auxCin;
    cin >> auxCin;

    if (auxCin < miNum)
    {
      miNum = auxCin;
      index = i;
    }
  }

  cout << "Menor valor: " << miNum << endl;
  cout << "Posicao: " << index << endl;

  return 0;
}