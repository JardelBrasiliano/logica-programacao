#include<bits/stdc++.h>
#include<string>

using namespace std;

void solve() {
  int n;cin>>n;
  string s, t;
  cin>>s>>t;
  for (int i=0; i<n; i++) {
    if(s[i] == 'R') {
      if(t[i] != 'R') {cout<<"NO\n";return;}
    }
    else {
      if(t[i] == 'R') {cout<<"NO\n";return;}
    }
  }
  cout << "Yes\n";
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}

  return 0;
}