// https://www.beecrowd.com.br/judge/pt/problems/view/1865

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {

    string nome;
    int forca;
    cin >> nome >> forca;

    if (nome == "Thor")
    {
      cout << "Y\n";
    }
    else
    {
      cout << "N\n";
    }
  }

  return 0;
}