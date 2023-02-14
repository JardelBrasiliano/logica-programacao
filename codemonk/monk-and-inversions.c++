#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main()
{

  int t;

  char c;

  cin >> t;

  while (t--)
  {

    unsigned short n, m, x, y;

    cin >> n >> m >> c;

    if (c == 'L')
    {

      x = n << m;

      y = n >> (16 - m);

      n = x | y;
    }

    if (c == 'R')
    {

      x = n >> m;

      y = n << (16 - m);

      n = x | y;
    }

    cout << n << "\n";
  }
}