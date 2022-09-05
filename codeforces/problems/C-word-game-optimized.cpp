#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve() {
	int n;
	cin >> n;
	map<string, int> mp;
	string a[3][n];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			mp[a[i][j]]++;
		}
	}
	for (int i = 0; i < 3; i++) {
		int tot = 0;
		for (int j = 0; j < n; j++) {
			if (mp[a[i][j]] == 1) {tot += 3;}
			else if (mp[a[i][j]] == 2) {tot++;}
		}
		cout << tot << ' ';
	}
	cout << "\n________________\n";
  
  for (map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it){
    cout<< "("<< it->first<< ", "<< it->second<< ") ";
  }
  cout<<"\n";

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}