// https://codeforces.com/contest/1692/problem/B
#include<bits/stdc++.h>
#include <set> 
 
using namespace std;
 
void solve() {
  set<int> S;
	int n;cin >> n;
 
  for(int i = 0; i < n; i++) {
    int s;cin>>s;
    S.insert(s);
  }

	if((n - S.size())%2 != 0) {
		cout << S.size() -1 << endl;
		return;
	} 
	cout << S.size() << endl;

}
 
int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
	
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();
 
  return 0;
}