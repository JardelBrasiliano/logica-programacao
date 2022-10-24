// Sequência S
// https://www.beecrowd.com.br/judge/pt/problems/view/1155

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double sum = 0;
  for (int i = 1; i <= 100; i++)
  {
    sum += (double)1 / i;
  }

  cout << fixed << setprecision(2);
  cout << sum << endl;

  return 0;
}
