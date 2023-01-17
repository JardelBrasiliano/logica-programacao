#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string t;

  getline(cin, t);

  if (t.size() <= 80)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

  return 0;
}