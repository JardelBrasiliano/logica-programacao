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

  char DD[8] = {s[0], s[1]};
  char MM[8] = {s[3], s[4]};
  char AA[8] = {s[6], s[7]};

  cout << MM << "/" << DD << "/" << AA << endl;
  cout << AA << "/" << MM << "/" << DD << endl;
  cout << DD << "-" << MM << "-" << AA << endl;

  return 0;
}