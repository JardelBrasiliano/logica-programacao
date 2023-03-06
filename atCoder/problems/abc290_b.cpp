#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int contFinal = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'o')
    {
      contFinal++;
    }
  }

  if (contFinal > k)
  {
    int diff = contFinal - k;
    for (int i = n - 1; i >= 0; i--)
    {
      if (s[i] == 'o' && diff > 0)
      {
        diff--;
        s[i] = 'x';
      }
    }
  }
  else if (contFinal < k)
  {
    int diff = k - contFinal;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'x' && diff > 0)
      {
        diff--;
        s[i] = '0';
      }
    }
  }
  cout << s << endl;
  return 0;
}