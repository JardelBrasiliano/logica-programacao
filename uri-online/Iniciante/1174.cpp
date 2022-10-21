// Seleçao em Vetor I
// https://www.beecrowd.com.br/judge/pt/problems/view/1174

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 0; i < 100; i++)
  {
    double auxCin;
    cin >> auxCin;
    if (auxCin <= 10)
    {
      cout << fixed << setprecision(1);
      cout << "A[" << i << "] = " << auxCin << endl;
    }
  }

  return 0;
}