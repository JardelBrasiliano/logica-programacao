// Substituição em Vetor I
// https://www.beecrowd.com.br/judge/pt/problems/view/1172

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 0; i < 10; i++)
  {
    int auxCin;
    cin >> auxCin;

    cout << "X[" << i << "] = ";
    if (auxCin <= 0)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << auxCin << endl;
    }
  }

  return 0;
}