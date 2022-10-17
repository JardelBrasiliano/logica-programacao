// https://codeforces.com/contest/1742/problem/C
#include<bits/stdc++.h>
#include <vector> 

using namespace std;

void solve() {
	char last = 'R';
	int contR = 0;
	int contB = 0;
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			char aux;cin >> aux;
			if(aux == 'R') {
				contR++;
			}
			if(aux == 'B') {
				contB++;
			}
		}	
		
		if (contR != 8 && contB >= 0) {
			last = 'B';
		} else {
			last = 'R';
		}
	}

	cout << last << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}