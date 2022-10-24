// Fibonacci em Vetor
// https://www.beecrowd.com.br/judge/pt/problems/view/1176

#include <bits/stdc++.h>
using namespace std;

long long int fib(int a)
{
  if (a == 0)
    return 0;

  long long int antes = 1;
  long long int agora = 1;

  for (int i = 0; i < (a - 2); i++)
  {
    long long int aux = agora + antes;
    antes = agora;
    agora = aux;
  }
  return agora;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int auxCin;
    cin >> auxCin;

    cout << "Fib(" << auxCin << ") = " << fib(auxCin) << endl;
  }

  return 0;
}