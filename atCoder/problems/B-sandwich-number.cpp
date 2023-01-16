#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  bool flag = false;
  if (s.size() == 8)
  {
    int primeiraLetra = (int)s[0];
    int ultimaLetra = (int)s[7];
    if (primeiraLetra >= 65 && primeiraLetra <= 90 && ultimaLetra >= 65 && ultimaLetra <= 90)
    {
      string numero = s.substr(1, 6);
      int n = stoi(numero);
      if (n >= 100000 && n <= 999999)
      {
        flag = true;
      }
    }
  }

  if (flag)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
  return 0;
}