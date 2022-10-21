// Preenchimento de Vetor I
// https://www.beecrowd.com.br/judge/pt/problems/view/1173

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < 10; i++)
  {
    cout << "N[" << i << "] = " << n << endl;
    n += n;
  }

  return 0;
}