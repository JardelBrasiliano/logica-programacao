#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, media = 0;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int aux;
    cin >> aux;

    if (aux < media)
    {
      cout << i << endl;
      return 0;
    }
    media = aux;
  }
  cout << 0 << endl;

  return 0;
}