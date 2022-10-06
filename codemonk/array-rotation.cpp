#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;cin >> n >> k;
  int a[n+10];
  
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int aux1 = k%n;

  for(int i = ((n-aux1)); i < n; i++ ) {
    cout << a[i] << " ";
  }

  for(int i = 0; i < ((n-aux1)); i++ ) {
    cout << a[i] << " ";
  }

  cout << endl; 

  return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();

  return 0;
}