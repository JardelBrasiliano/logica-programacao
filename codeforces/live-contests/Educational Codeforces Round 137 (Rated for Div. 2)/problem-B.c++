// https://codeforces.com/contest/1743/problem/B
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;cin >> n;

	cout << "1 " << n << " ";
	for (int i = 2; i <= n - 1; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}
