#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 0; i < 14; i++)
  {
    char c;
    cin >> c;

    if (c == '.' || c == '-')
    {
      cout << endl;
    }
    else
    {
      cout << c;
    }
  }
  cout << endl;

  return 0;
}