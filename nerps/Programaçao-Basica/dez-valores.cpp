#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int x;cin>>x;

  for(int i = x+1; i < x+10; i++) {
    cout << i << " ";
  }
  cout << x+10 << "\n";
	return 0;
}