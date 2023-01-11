//  https://www.beecrowd.com.br/judge/pt/problems/view/1864

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  string l = "LIFE IS NOT A PROBLEM TO BE SOLVED";

  for (int i = 0; i < n; i++)
  {
    cout << l[i];
  }
  cout << endl;

  return 0;
}
