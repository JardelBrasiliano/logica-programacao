#include <bits/stdc++.h>
#include <string>

#define ll long long

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true)
  {
    ll int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
      break;
    }

    cout << a * b << endl;
  }

  return 0;
}