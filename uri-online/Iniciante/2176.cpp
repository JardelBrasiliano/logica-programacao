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

  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (s[i] == '1')
    {
      sum++;
    }
  }

  cout << s;
  if (sum % 2 == 0)
  {
    cout << 0;
  }
  else
  {
    cout << 1;
  }
  cout << endl;
  return 0;
}