#include<bits/stdc++.h>
#include<string>

using namespace std;


void solve() {
  int x, y, z;cin >> x >> y >> z;

  if(x > 0) {
    if(y > x ) {
      cout << abs(x) << endl;
      return;
    }
    if(y < 0) {
      cout << abs(x) << endl;
      return;
    }
    if(z >= x) {
      cout << -1 << endl;
      return;
    }
    if(z >= y) {
      cout << -1 << endl;
      return;
    }
  } else {
    if(y < x) {
      cout << abs(x) << endl;
      return;
    } 
    if(y > 0) {
      cout << abs(x) << endl;
      return;
    }
    if(z <= x) {
      cout << -1 << endl;
      return;
    }
    if(z <= y) {
      cout << -1 << endl;
      return;
    }
  }

  cout << abs(x-z) + (abs(z)) << endl;  

  return;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	// int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  solve();

  return 0;
}