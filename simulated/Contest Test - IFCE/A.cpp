#include<bits/stdc++.h>
#include<string>

using namespace std;

void solve() {
  string entrada;
  cin >> entrada;

  if(entrada.length() != 3 ) {
    cout << "NO\n";
    return;
  }

  if(char(tolower(entrada[0])) == 'y' && char(tolower(entrada[1])) == 'e' && char(tolower(entrada[2])) == 's'){
    cout << "YES\n";
    return;
  }

  cout << "NO\n";
  return;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}