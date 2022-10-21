// Quadrado e ao Cubo
// https://www.beecrowd.com.br/judge/pt/problems/view/1143

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
    cout << i * i << " ";
    cout << i * i * i << "\n";
  }

  return 0;
}