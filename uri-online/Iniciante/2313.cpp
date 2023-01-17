// triangulos, escaleno, isoceles ou equilatero e se trata-se de um triangulo retangulo

#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;

  if (a < (b + c) && b < (a + c) && c < (a + b))
  {
    if (a == b && b == c)
    {
      cout << "Valido-Equilatero\n";
    }
    else if (a != b && a != c && b != c)
    {
      cout << "Valido-Escaleno\n";
    }
    else if (a == b || a == c || b == c)
    {
      cout << "Valido-Isoceles\n";
    }

    if ((c * c) == (a * a) + (b * b) || (a * a) == (c * c) + (b * b) || (b * b) == (a * a) + (c * c))
    {
      cout << "Retangulo: S\n";
    }
    else
    {
      cout << "Retangulo: N\n";
    }
    return 0;
  }
  cout << "Invalido\n";
  return 0;
}