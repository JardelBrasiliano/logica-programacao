// https://neps.academy/br/exercise/384
#include<bits/stdc++.h>
#include <vector> 
#include <set>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 

  int n, m;cin>>n;
  vector<int> fila; 

  for(int i=0; i<n; i++) {
    int aux2;cin>>aux2;
    fila.push_back(aux2);
  }

  cin>>m;
  set<int> sair;
  
  for(int i=0; i<m; i++) {
    int aux2;cin>>aux2;
    sair.insert(aux2);
  }
  
  for(int j=0; j<n; j++) {
    if (sair.find(fila[j]) == sair.end())
      cout << fila[j] <<  " ";
  }

  cout << endl;
	return 0;
}
