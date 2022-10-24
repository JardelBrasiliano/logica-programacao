// 	Preenchimento de Vetor III
// https://www.beecrowd.com.br/judge/pt/problems/view/1178

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double n;
  cin >> n;

  cout << fixed << setprecision(4);
  cout << "N[0] = " << n << endl;
  for (int i = 1; i < 100; i++)
  {
    n /= 2;
    cout << "N[" << i << "] = " << n << endl;
  }

  return 0;
}