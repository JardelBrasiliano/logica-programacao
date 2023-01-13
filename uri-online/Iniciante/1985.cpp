// https://www.beecrowd.com.br/judge/pt/problems/view/1985

#include <bits/stdc++.h>
#include <string>

using namespace std;

double valueItem(int code)
{
  if (code == 1001)
    return 1.50;
  if (code == 1002)
    return 2.50;
  if (code == 1003)
    return 3.5;
  if (code == 1004)
    return 4.50;
  if (code == 1005)
    return 5.50;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double total = 0;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int aux, cont;
    cin >> aux >> cont;
    double item = valueItem(aux);
    total += (item * cont);
  }

  cout << fixed << setprecision(2);
  cout << total << endl;
  return 0;
}