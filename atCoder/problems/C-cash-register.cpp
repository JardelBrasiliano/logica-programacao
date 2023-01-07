// C - Cash Register
// https://atcoder.jp/contests/abc283/tasks/abc283_c

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  int zeroTotal = 0;
  int aux = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '0')
    {
      aux = aux + 1;
      if (aux == 2)
      {
        zeroTotal++;
        aux = 0;
      }
    }
    else
    {
      aux = 0;
    }
  }
  cout << s.length() - zeroTotal << endl;

  return 0;
}
