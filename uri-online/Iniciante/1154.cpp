// Idades
// https://www.beecrowd.com.br/judge/pt/problems/view/1154

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sum = 0, aux = 0;
  double n = 0;
  while (cin >> n && n >= 0)
  {
    sum += n;
    aux++;
  }

  cout << fixed << setprecision(2);
  cout << (double)sum / aux << endl;
  return 0;
}