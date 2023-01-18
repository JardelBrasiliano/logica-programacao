#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int s = 0, s1 = 0, b = 0, b1 = 0, a = 0, a1 = 0;
  for (int i = 0; i < n; i++)
  {
    string nome;
    cin >> nome;
    int auxS, auxB, auxA;
    cin >> auxS >> auxB >> auxA;
    int auxS1, auxB1, auxA1;
    cin >> auxS1 >> auxB1 >> auxA1;

    s += auxS;
    b += auxB;
    a += auxA;

    s1 += auxS1;
    b1 += auxB1;
    a1 += auxA1;
  }

  cout << fixed << setprecision(2);
  cout << "Pontos de Saque: " << (s1 * 100.0) / s << " %.\n";
  cout << "Pontos de Bloqueio: " << (b1 * 100.0) / b << " %.\n";
  cout << "Pontos de Ataque: " << (a1 * 100.0) / a << " %.\n";

  return 0;
}