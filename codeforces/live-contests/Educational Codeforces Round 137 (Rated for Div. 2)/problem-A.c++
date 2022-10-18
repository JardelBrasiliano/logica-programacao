// https://codeforces.com/contest/1743/problem/A
#include<bits/stdc++.h>

using namespace std;

int rc(int a) {
	if(a == 0) {
		return 0;
	}
	return a + rc(a-1);
}

void solve() {
	int n;cin >> n;
 
	for (int i = 0; i < n; i++) {
		int aux;cin >> aux;
	}
 
	cout << rc(9-n) * 6 << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}
