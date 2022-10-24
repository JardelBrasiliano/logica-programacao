// Ultrapassando Z
// https://www.beecrowd.com.br/judge/pt/problems/view/1150
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n;

  while (true)
  {
    cin >> m;
    if (m > n)
    {
      break;
    }
  }

  int sum = n, cont = 1;
  while (true)
  {
    sum += (n + cont++);

    if (sum > m)
    {
      break;
    }
  }
  cout << cont << endl;
  return 0;
}
