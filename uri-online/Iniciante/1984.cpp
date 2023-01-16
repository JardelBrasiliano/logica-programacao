#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  for (int i = s.size() - 1; i >= 0; i--)
  {
    cout << s[i];
  }
  cout << endl;

  return 0;
}