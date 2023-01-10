// https://www.beecrowd.com.br/judge/pt/problems/view/2057

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;
  int sum = a + b + c;

  if (sum > 24)
  {
    sum = sum - 24;
  }
  else if (sum < 0)
  {
    sum = 24 + sum;
  }

  cout << sum << endl;

  return 0;
}