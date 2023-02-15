#include <bits/stdc++.h>
#include <vector>
#include <string>

#define ll long long

using namespace std;

int fatorialSum(int a)
{
  if (a > 1)
    return a + fatorialSum(a - 1);
  else
    return 1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int fatorial = fatorialSum(n);
  int sum = 0;

  for (int i = 0; i < n - 1; i++)
  {
    int aux;
    cin >> aux;

    sum += aux;
  }

  cout << fatorial - sum << endl;
  return 0;
}