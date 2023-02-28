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

  string s;
  getline(cin, s);

  int size = s.size();

  int sum = 1, maior = 1;
  for (int i = 0; i < size - 1; i++)
  {
    char compare = s[i];
    char current = s[i + 1];
    if (compare == current)
    {
      sum++;
    }
    else
    {
      if (sum > maior)
      {
        maior = sum;
      }
      sum = 1;
    }
    compare = current;
  }
  if (sum > maior)
  {
    maior = sum;
    sum = 1;
  }
  cout << maior << endl;
  return 0;
}