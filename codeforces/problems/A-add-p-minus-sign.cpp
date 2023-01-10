#include <bits/stdc++.h>
#include <vector>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;

  string s;
  cin >> s;

  int numeroFinal = s[0] - '0';

  for (int i = 1; i < n; i++)
  {
    int numeroAtual = s[i] - '0';

    int soma = numeroAtual + numeroFinal;
    int sub = numeroAtual - numeroFinal;

    if (soma <= 1)
    {
      numeroFinal = soma;
      cout << "+";
    }
    else
    {
      numeroFinal = sub;
      cout << "-";
    }
  }

  cout << endl;
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
  // solve();

  return 0;
}