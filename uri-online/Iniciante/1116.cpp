// Dividindo X por Y
// https://www.beecrowd.com.br/judge/pt/problems/view/1116

#include <bits/stdc++.h>
using namespace std;

void solve()
{
  double a, b;
  cin >> a >> b;

  if (b == 0)
  {
    cout << "divisao impossivel\n";
    return;
  }

  cout << fixed << setprecision(1);
  cout << a / b << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;
  {
    for (int i = 0; i < tt; i++)
    {
      solve();
    }
  }

  return 0;
}