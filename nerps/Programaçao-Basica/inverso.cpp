#include<bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int v[10];

  for(int i = 0; i < 10; i++){
    cin>>v[i];
  }

  for(int i = 9; i >= 0; i--){
    cout << v[i] << endl;
  }

	return 0;
}