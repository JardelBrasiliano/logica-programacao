// Binario para decimal

#include <bits/stdc++.h>
#include <bitset>
#include <string>

#define ll long long

using namespace std;

int binaryForDec(string num)
{
  int decimal = 0;
  int base = 1;
  for (int i = num.length() - 1; i >= 0; i--)
  {
    if (num[i] == '1')
    {
      decimal += base;
    }
    base *= 2;
  }
  return decimal;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int sum = 0, contStop = 0;
  while (true)
  {
    string texto;
    getline(cin, texto);

    if (texto == "caw caw")
    {
      cout << sum << endl;
      sum = 0;
      contStop++;
      if (contStop == 3)
        break;
    }
    else
    {
      for (int i = 0; i < 3; i++)
      {
        texto[i] = texto[i] == '-' ? '0' : '1';
      }
      int x = binaryForDec(texto);
      sum += x;
    }
  }

  return 0;
}