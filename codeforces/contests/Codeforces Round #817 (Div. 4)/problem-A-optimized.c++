#include<bits/stdc++.h>
#include<string>

using namespace std;

void solve() {
  string name = "Timur";
  sort(name.begin(), name.end());

  int m;cin>>m;
  string s;cin>>s;

  sort(s.begin(), s.end());
  cout<<(s==name ? "YES" : "NO") << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}

  return 0;
}