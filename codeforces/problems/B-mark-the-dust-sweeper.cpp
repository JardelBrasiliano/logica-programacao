// B. Mark the Dust Sweeper
// https://codeforces.com/problemset/problem/1705/B
// rating: 900

#include <bits/stdc++.h>
#include <vector>

#define ll long long

using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v;

  ll int sum = 0;
  int contZero = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int aux;
    cin >> aux;
    if (aux != 0)
    {
      v.push_back(aux);
      sum += aux;
      contZero++;
    }
    else
    {
      if (v.size() > 0)
      {
        v.push_back(aux);
        sum += 1;
      }
    }
  }

  int auxCin;
  cin >> auxCin;

  cout << sum << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    solve();
  }
  // solve();
  return 0;
}