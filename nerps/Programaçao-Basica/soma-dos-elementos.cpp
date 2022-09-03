#include<bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int n;cin>>n;

  int aux = 0;
  for(int i= 0; i < n; i++){
    int entradaA;
    cin >> entradaA;
    aux += entradaA;
  }

  cout << aux << endl;
  
	return 0;
}