// https://codeforces.com/contest/1746/problem/A
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve() {
	int n, k;cin >> n >> k;
	
	int cont = 0;
	for(int i = 0; i < n; i++) {
		int auxCin;cin >> auxCin;
		if(auxCin == 1) {
			cont++;
		}
	}
	if(cont >= 1) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
	return;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}