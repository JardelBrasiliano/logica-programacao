// https://codeforces.com/problemset/problem/1728/B
#include<bits/stdc++.h>
#include <set> 
#include<string>

using namespace std;

void solve() {
  int n;cin>>n;

  int inicial = (n/2);
  for(int i = 0; i < inicial-1; i++) {
    cout << i+2 << " ";
  }
  for(int i = 1; i <= inicial; i++) {
    cout << i << " ";
  }
  cout << n << "\n";
  return;
} 

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int tt;cin>>tt;

  // for(int i = 0; i < tt; i++) {solve();}
  solve();

	return 0;
}