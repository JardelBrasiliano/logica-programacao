// https://codeforces.com/contest/1692/problem/A
#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a;cin >> a;

	int cont = 0;
	for(int i = 0; i < 3; i++) {
		int aux;cin >> aux;
		if(aux > a) {
			cont++;
		}
	}

	cout << cont << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}