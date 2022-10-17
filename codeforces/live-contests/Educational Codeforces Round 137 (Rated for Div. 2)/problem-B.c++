// https://codeforces.com/contest/1743/problem/B
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve() {
	int n;cin >> n;

	if(n == 3) {
		cout << "1 2 3\n";
		return;
	}
	
	if(n == 4) {
		cout << "2 1 4 3\n";
		return;
	}

	cout << "4 1 ";
	cout << n << " ";
	for (int i = n-2; i >= 2; i--) {
		if(i%2 == 0) {
			cout << i+1 << " ";
		} else {
			cout << i-1 << " ";
		}
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
