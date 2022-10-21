// PUM
// https://www.beecrowd.com.br/judge/pt/problems/view/1142

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int sum = 1;
  for (int i = 0; i < n; i++)
  {
    int c = 0;
    for (int j = 0; j < 4; j++)
    {
      if (c == 3)
      {
        cout << "PUM\n";
        sum++;
        c = 0;
      }
      else
      {
        c++;
        cout << sum++ << " ";
      }
    }
  }

  return 0;
}