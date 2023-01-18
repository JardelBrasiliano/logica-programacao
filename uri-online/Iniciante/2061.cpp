#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a >> b;

  int contFechou = 0, contAbriu = 0;

  for (int i = 0; i < b; i++)
  {
    string s;
    cin >> s;

    if (s == "fechou")
    {
      contFechou++;
    }
    else
    {
      contAbriu++;
    }
  }

  cout << abs(abs((contFechou) + a) - contAbriu) << endl;

  return 0;
}