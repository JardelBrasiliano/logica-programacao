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

  for (int i = 1; i <= 10; i++)
  {
    string s;
    cin >> s;

    if (i == 3 || i == 7 || i == 9)
    {
      cout << s << endl;
    }
  }

  return 0;
}