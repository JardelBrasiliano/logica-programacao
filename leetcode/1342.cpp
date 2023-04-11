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
  int num = 14;
  int numAux = num;
  int cont = 0;
  cout << "numAux: " << numAux << endl;
  while (numAux != 0)
  {
    if (numAux % 2 == 0)
    {
      numAux = numAux / 2;
    }
    else
    {
      numAux--;
    }
    cont++;
  }

  cout << cont;

  return 0;
}