// Tipo de Combustível
// https://www.beecrowd.com.br/judge/pt/problems/view/1134

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a = 0, alcool = 0, gasolina = 0, diesel = 0;
  while (true)
  {
    cin >> a;
    if (a == 4)
      break;

    if (a == 1)
    {
      alcool++;
    }
    else if (a == 2)
    {
      gasolina++;
    }
    else if (a == 3)
    {
      diesel++;
    }
  }

  cout << "MUITO OBRIGADO\n";
  cout << "Alcool: " << alcool << endl;
  cout << "Gasolina: " << gasolina << endl;
  cout << "Diesel: " << diesel << endl;

  return 0;
}