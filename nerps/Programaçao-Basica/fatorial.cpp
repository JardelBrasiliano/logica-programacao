#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;cin>>n;

  if(n == 0 || n == 1) {
    cout << 1 << endl;
    return 0;
  };

  int aux = 1;
  for(int i = 1; i < n+1; i++){
    aux = i * aux;
  }

  cout << aux << endl;

	return 0;
}