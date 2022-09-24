#include<bits/stdc++.h>
#include<string>

using namespace std;


void solve() {
  int x, y, z;cin >> x >> y >> z;

  if(y<0) {
    x=-x;
    y=-y;
    z=-z;
  }

  if(x<y) {
    cout << abs(x) << endl;
  } else {
    if(z>y) {
      cout << -1 << endl;
    } else {
      cout << abs(z) + abs(x-z) << endl;
    }
  }

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