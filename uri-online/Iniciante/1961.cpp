#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int p, n;
  cin >> p >> n;

  int b;
  cin >> b;
  for (int i = 0; i < n - 1; i++)
  {
    int atual;
    cin >> atual;

    if (abs(atual - b) > p)
    {
      cout << "GAME OVER\n";
      return 0;
    }
    b = atual;
  }

  cout << "YOU WIN\n";
  return 0;
}