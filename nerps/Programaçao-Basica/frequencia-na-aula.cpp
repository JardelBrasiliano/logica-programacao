#include<bits/stdc++.h>
#include <set> //Biblioteca do set

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

  set<int> S;
  int n;cin>>n;

  for(int i = 0; i < n; i++) {
    int aux;cin>>aux;
    S.insert(aux);
  }

  cout << S.size() << endl;
	return 0;
}		