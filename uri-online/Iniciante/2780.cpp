#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int res;
  if (n <= 800)
  {
    res = 1;
  }
  else if (n <= 1400)
  {
    res = 2;
  }
  else if (n <= 2000)
  {
    res = 3;
  }

  cout << res << endl;
  return 0;
}