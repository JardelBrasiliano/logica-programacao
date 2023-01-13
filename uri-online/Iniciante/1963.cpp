// https://www.beecrowd.com.br/judge/pt/problems/view/1963

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double a, b;

  cin >> a >> b;

  double increase = b - a;
  double porcent = (increase * 100) / a;

  cout << fixed << setprecision(2);
  cout << porcent << "%\n";

  return 0;
}