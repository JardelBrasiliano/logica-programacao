#include <bits/stdc++.h>
using namespace std;

const long long int mod = 1e9 + 7;

int n, fact[5005];

int main()
{
  cin >> n;
  long long int sum = 0, fat = 1;
  for (int i = 1; i <= n; i++)
  {
    fat *= i;
    sum += (fat * fat) % mod;
  }

  cout << sum << endl;
  return 0;
}