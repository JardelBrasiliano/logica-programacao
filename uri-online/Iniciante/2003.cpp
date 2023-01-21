// pegando valor de strin e colocando em uma variavel int
#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  while (cin >> s)
  {
    int h, min;
    char c;
    stringstream(s) >> h >> c >> min;

    int hForS = h * 60 * 60;
    int minForS = min * 60;

    int total = hForS + minForS + (1 * 60 * 60);
    int dif = total - (8 * 60 * 60);

    int secForMin = dif / 60;

    if (secForMin <= 0)
    {
      secForMin = 0;
    }
    cout << "Atraso maximo: " << secForMin << endl;
  }
  return 0;
}