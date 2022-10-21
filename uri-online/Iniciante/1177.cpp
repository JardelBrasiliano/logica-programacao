// 	Preenchimento de Vetor II
// https://www.beecrowd.com.br/judge/pt/problems/view/1177

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int aux = 0;
  for (int i = 0; i < 1000; i++)
  {
    cout << "N[" << i << "] = " << aux++ << endl;
    if (aux == n)
      aux = 0;
  }

  return 0;
}