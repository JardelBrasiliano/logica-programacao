// Troca em Vetor I
// https://www.beecrowd.com.br/judge/pt/problems/view/1175

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int v1[25];

  for (int i = 0; i < 20; i++)
  {
    cin >> v1[i];
  }

  int index = 0;
  for (int i = 19; i > 9; i--)
  {
    cout << "N[" << index++ << "] = " << v1[i] << endl;
  }

  for (int i = 9; i >= 0; i--)
  {
    cout << "N[" << index++ << "] = " << v1[i] << endl;
  }

  return 0;
}
