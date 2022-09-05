// https://codeforces.com/problemset/problem/1721/A
#include<bits/stdc++.h>
#include <set> 
#include<string>

using namespace std;

void solve() {
  set<char> S;

  for(int i = 0; i < 4; i++) {
    char s;cin>>s;
    S.insert(s);
  }

  cout << S.size() - 1 << endl;
} 

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;cin>>n;

  for(int i = 0; i < n; i++) {
    solve();
  }
  
	return 0;
}