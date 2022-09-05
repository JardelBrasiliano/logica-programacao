// https://codeforces.com/problemset/problem/1720/B
#include<bits/stdc++.h>
#include <vector> 

using namespace std;

void solve() {
  int p;cin>>p; 
  vector<int> v; 

  for(int j = 0; j < p; j++) {
    int cinAux;cin>>cinAux;
    v.push_back(cinAux);
  }
  sort( v.begin(), v.end());

  cout << (v[p-1] - v[0])+(v[p-2] - v[1]) << endl;
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