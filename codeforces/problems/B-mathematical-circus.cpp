// https://codeforces.com/problemset/problem/1719/B
#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
  int n, k;cin >> n >> k;
  int tem = -1;

  for(int i = 1; i <= n; i +=2) {
    int a = i;
    int b = i+1;
    long long int aux = ((a + k));
    long long int aux1 = ((aux) * (b));

    cout << a << " " << b << endl;

    if(aux1% 4 == 0) {
      if(tem == -1) {
        // cout << "YES\n";
        tem = 1;
      }
      // cout << a << " " << b << endl;
    }
  }

  for(int i = 1; i <= n/2; i++) {
    int a = i+1;
    int b = i;
    long long int aux = ((a + k));
    long long int aux1 = ((aux) * (b));

    if(aux1% 4 == 0) {
      if(tem == -1) {
        // cout << "YES\n";
        tem = 1;
      }
      // cout << a << " " << b << endl;
    }
  }

  if(tem == -1) {
    // cout << "NO\n";
  }

  return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();

  return 0;
}