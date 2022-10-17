// https://codeforces.com/contest/1742/problem/D
#include<bits/stdc++.h>
#include <vector> 

using namespace std;

void solve() {
  vector<pair<int, int>> v; 
	int n;cin >> n;

	int maiorNumero = -1;
  for(int i = 1; i <= n; i++){
    int valor;
    cin >> valor ;
		if(i == 1) {
			maiorNumero = valor + valor;
		}
    v.push_back( make_pair(valor, i) );
  }
	sort( v.begin(), v.end() );
	cout << v[n-1].first << " " << v[n-1].second << endl;

	for(int j = 0; j < n; j++){
		if((__gcd(v[n-1].first, v[j].first) == 1 && __gcd(v[n-1].second, v[j].second) == 1) ) {
			if((v[n-1].second + v[j].second) > maiorNumero) {
				maiorNumero = (v[n-1].second + v[j].second);
			}
		}
	}

	cout << maiorNumero << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}