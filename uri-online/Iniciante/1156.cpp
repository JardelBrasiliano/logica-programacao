// Sequência S II
// https://www.beecrowd.com.br/judge/pt/problems/view/1156

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double sum = 1;
  for (int i = 2; i < 40; i *= 2)
  {
    sum += (double)((i + 1) / i);
  }
  cout << fixed << setprecision(2);
  cout << sum << endl;
  return 0;
}
