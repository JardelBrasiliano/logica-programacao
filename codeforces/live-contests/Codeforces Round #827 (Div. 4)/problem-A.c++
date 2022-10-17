// https://codeforces.com/contest/1742/problem/A
#include<bits/stdc++.h>
#include <vector> 

using namespace std;

void solve() {
  vector<int> v; 

	for(int i = 0; i < 3; i++) {
		int aux;cin >> aux;
		v.push_back(aux);
	}
  sort(v.begin(), v.end());

	if((v[0] + v[1]) == v[2]) {
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