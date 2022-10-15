// https://codeforces.com/contest/1746/problem/B
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void solve() {
	int n;cin >> n;
	vector<int> v;

	int contOne = 0;
	for (int i = 0; i < n; i++) {
		int auxCin;cin >> auxCin;
		if(auxCin == 1) {
			contOne++;
		}
		v.push_back(auxCin);
	}

	int contZero = 0;
	for (int i = n-1; i >= (n-contOne); i--) {
		if(v[i] == 0) {
			contZero++;
		}
	}
	cout << contZero << endl;
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