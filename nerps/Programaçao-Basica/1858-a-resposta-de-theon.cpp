//  https://www.beecrowd.com.br/judge/pt/problems/view/1858

#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int menor = INT_MAX;
  int indexMenor = -1;
  for (int i = 0; i < n; i++)
  {
    int s;
    cin >> s;
    if (s < menor)
    {
      menor = s;
      indexMenor = i;
    }
  }
  cout << indexMenor + 1 << endl;
  return 0;
}