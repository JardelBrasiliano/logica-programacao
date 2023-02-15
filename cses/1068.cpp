#include <bits/stdc++.h>
#include <vector>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll int n;
  cin >> n;

  cout << n << " ";
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
    }
    else
    {
      n = (n * 3) + 1;
    }
    cout << n << " ";
  }
  cout << endl;

  return 0;
}