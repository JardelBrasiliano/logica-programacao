#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, sx, sy, d;cin >> n >> m >> sx >> sy >> d;

  int top = sy - d;
  int bottom = sy + d;

  int left = sx - d;
  int right = sx + d;

  if(left <= 1 && (top <= 1 || right >= n)) {
    cout << -1 << endl;
  } else if (bottom >= m && (top <= 1 || right >= n)){
    cout << -1 << endl;
  } else {
    cout << n + m - 2 << endl ;
  }
} 

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int tt;cin >> tt;
  for(int i = 0; i < tt; i++){solve();}
  // solve();

	return 0;
}