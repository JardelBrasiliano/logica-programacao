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

  int n, a, b;
  cin >> n >> a >> b;

  if (a + b > n)
  {
    cout << "Deixa para amanha!\n";
  }
  else
  {
    cout << "Farei hoje!\n";
  }

  return 0;
}