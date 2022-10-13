// https://codeforces.com/contest/1692/problem/C
#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;

void solve() {
	vector< pair<int, int> > v;
	string s[8];
	for(int i = 0; i < 8; i++) {
		cin >> s[i];
	}	

	bool bisOpen = false;

	for(int i = 0; i < 7; i++) {
		int index = 0;
		int contSeq = 0;

		for(int j = 0; j < 8; j++) {
			char atual = s[i][j];

			if(atual == '#') {
				index = j;
				contSeq++;
			}
		}

		if(contSeq == 2) {
			bisOpen = true;
		}

		if(bisOpen && contSeq == 1) {
			cout << i+1 << " " << index+1 << endl;
			return;
		}
	}	
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}