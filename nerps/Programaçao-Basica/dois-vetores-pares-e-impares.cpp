#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int v[10];

  for(int i = 0; i < 10; i++) {
    cin>>v[i];
  }

  for(int i = 0; i < 10; i++) {
    if(v[i]%2 == 0) cout << v[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < 10; i++) {
    if(v[i]%2 != 0) cout << v[i] << " ";
  }
  cout << endl;

	return 0;
}