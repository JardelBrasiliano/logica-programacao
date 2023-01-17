#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  double inscricao, nota = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    double cInscricao, cNota;
    cin >> cInscricao >> cNota;
    if (cNota > nota)
    {
      inscricao = cInscricao;
      nota = cNota;
    }
  }

  if (nota < 8)
  {
    cout << "Minimum note not reached\n";
  }
  else
  {
    cout << inscricao << endl;
  }

  return 0;
}