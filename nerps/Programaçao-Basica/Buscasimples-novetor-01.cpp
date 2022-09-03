#include<bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int v[10], x;

  for(int i = 0; i<10; i++){
    cin>>v[i];
  }

  cin>>x;

  int achouX = -1;
  for(int i = 0; i<10; i++){
    if(x == v[i]) achouX = 1;
  }
  
  if(achouX > 0) {
    cout << "SIM\n";
    return 0;
  }
  cout << "NAO\n";

	return 0;
}
