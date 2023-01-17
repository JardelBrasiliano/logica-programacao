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

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    cout << fixed << setprecision(2);
    cout << s.size() / 100.0 << endl;
  }

  return 0;
}