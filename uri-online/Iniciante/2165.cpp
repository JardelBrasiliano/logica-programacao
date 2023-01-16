#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline(cin, s);

  if (s.size() <= 140)
  {
    cout << "TWEET\n";
  }
  else
  {
    cout << "MUTE\n";
  }

  return 0;
}