#include<bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int a, b;cin>>a>>b;

  int start = a > b ? b : a;
  int end = a > b ? a : b;

  for(int i = start; i < end; i++) {
    cout << i << " ";
  }
  cout << end << endl;
	return 0;
}
