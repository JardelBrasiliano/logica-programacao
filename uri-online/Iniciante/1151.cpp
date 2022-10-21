// Fibonacci Fácil
// https://www.beecrowd.com.br/judge/pt/problems/view/1151

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  cout << "0 1 ";

  long long int antes = 1;
  long long int agora = 1;

  for (int i = 0; i < (n - 2); i++)
  {
    cout << agora;
    if (i != (n - 3))
      cout << " ";
    int aux = agora + antes;
    antes = agora;
    agora = aux;
  }
  cout << endl;

  return 0;
}