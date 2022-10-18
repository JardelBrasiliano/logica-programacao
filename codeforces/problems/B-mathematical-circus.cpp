// https://codeforces.com/problemset/problem/1719/B
#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  for (int i = 1; i <= 3; i += 2)
  {
    long long int sumAux = (long long)(i + k) * (i + 1);
    long long int sumAux2 = (long long)((i + 1) + k) * (i);

    if (sumAux % 4 != 0 && sumAux2 % 4 != 0)
    {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
  for (int i = 1; i <= n; i += 2)
  {
    long long int sumAux = (long long)(i + k) * (i + 1);

    if (sumAux % 4 == 0)
    {
      cout << i << " " << (i + 1) << endl;
    }
    else
    {
      cout << (i + 1) << " " << i << endl;
    }
  }

  return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();

  return 0;
}