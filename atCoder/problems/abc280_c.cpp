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
  string s1, s2;
  cin >> s1 >> s2;

  int size = max(s1.size(), s2.size());

  for (int i = 0; i < size; i++)
  {
    if (s1[i] != s2[i])
    {
      cout << (i + 1) << endl;
      return 0;
    }
  }

  return 0;
}