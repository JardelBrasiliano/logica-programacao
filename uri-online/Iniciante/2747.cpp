// https://www.beecrowd.com.br/judge/pt/problems/view/2747

#include <bits/stdc++.h>

using namespace std;

void headerFooter()
{
  for (int i = 0; i < 39; i++)
  {
    cout << "-";
  }
  cout << endl;
}

void body()
{
  cout << "|";
  for (int i = 0; i < 37; i++)
  {
    cout << " ";
  }
  cout << "|\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  headerFooter();
  for (int i = 0; i < 5; i++)
  {
    body();
  }
  headerFooter();

  return 0;
}
