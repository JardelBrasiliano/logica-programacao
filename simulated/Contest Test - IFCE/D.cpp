#include<bits/stdc++.h>
#include <vector> 
#include <set> 
#include<string>
#include <algorithm> 

using namespace std;


void solve() {
  int n;cin >> n;
  vector<string> v; 
	map<string, int> mp;

  for(int i = 0; i < n; i++) {
    string entrada;
    cin >> entrada;
    v.push_back(entrada);

    for(int j = 0; j < v.size(); j++) {
      string entradaBusca1 = entrada+v[j];
      string entradaBusca2 = v[j]+entrada;
      if(entradaBusca1.length() <= 8) {
        mp.insert(make_pair(entradaBusca1, 1));
        mp.insert(make_pair(entradaBusca2, 1));
      }
    }
  }

  for(int i = 0; i < n; i++) {
    int achou = 0;
    if(v[i].length() > 1 && mp.find(v[i]) != mp.end()){ 
      achou = 1;
    }
    cout << achou;
  }
  cout << endl;
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