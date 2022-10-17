// https://codeforces.com/contest/1743/problem/A
#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;cin >> n;

	for (int i = 0; i < n; i++) {
		int aux;cin >> aux;
	}

	int auxSum = 0;
	for (int i = 0; i < 10-n; i++) {
		auxSum += i;
	}

	cout << auxSum * 6 << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}
