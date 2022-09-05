// https://codeforces.com/problemset/problem/1722/C
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
  int p;cin>>p;
  vector<string> v[3];
  map<string, int> M;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < p; j++) {
      string auxCin;
      cin>>auxCin;
      v[i].push_back(auxCin);

      if(M.find(auxCin) != M.end()){
        M[auxCin] = (M[auxCin] + 1);
      } else{
        M.insert(make_pair(auxCin, 1));
      }
    }
  }

  /*
    Outra maneira de adicionar com map
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
        mp[a[i][j]]++;
      }
    }
  */

  int vPont[3];

  for(int i = 0; i < 3; i++) {
    int auxSum = 0;
    for(int j = 0; j < p; j++) {
      int quantNUm = M[v[i][j]];

      if(quantNUm == 1) {
        auxSum += 3;
      } else if(quantNUm == 2) {
        auxSum++;
      }
    }
    vPont[i] = auxSum;
  }
  
  cout << vPont[0] << " " << vPont[1] << " " << vPont[2] << endl;
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