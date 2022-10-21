// https://codeforces.com/problemset/problem/1744/A

#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  int v[55];
  string s;

  for (int i = 0; i < n; i++)
  {
    int auxCin;
    cin >> auxCin;
    v[i] = auxCin;
  }
  cin >> s;

  for (int i = 0; i < n; i++)
  {
    int atualNumero = v[i];
    char atualLetra = s[i];
    for (int j = i; j < n; j++)
    {
      if (atualNumero == v[j])
      {
        if (atualLetra != s[j])
        {
          cout << "NO\n";
          return;
        }
      }
    }
  }

  cout << "YES\n";
  return;

  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    solve();
  }

  return 0;
}