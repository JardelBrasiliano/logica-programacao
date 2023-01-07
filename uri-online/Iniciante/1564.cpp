// Vai Ter Copa?
// https://www.beecrowd.com.br/judge/pt/problems/view/1564

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int c;

  while (cin >> c)
  {
    if (c == 0)
    {
      cout << "vai ter copa!" << endl;
    }
    else
    {
      cout << "vai ter duas!" << endl;
    }
  }

  return 0;
}