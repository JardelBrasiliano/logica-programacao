// coprimes, coprime
// Numeros primos entre si
// Se resutlado igual a "1", pq sao primos entre eles
// Euclides

#include <bits/stdc++.h>

using namespace std;

inline int gcd(int a, int b)
{
  return b ? gcd(b, a % b) : a;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << gcd(7, 5);
  return 0;
}