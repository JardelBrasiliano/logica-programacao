// https://codeforces.com/contest/1742/problem/B
#include<bits/stdc++.h>
#include <vector> 

using namespace std;

void solve() {
  set<int> S;
	int n;cin >> n;

  for(int i = 0; i < n; i++) {
    int s;cin>>s;
    S.insert(s);
  }

	if(S.size() == n) {
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