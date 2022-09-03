#include<bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n, aux=0;

  while(cin>>n && n != 0) {
    if(n>aux) {
      aux = n;
    }
  }

  cout << aux << endl;
	return 0;
}