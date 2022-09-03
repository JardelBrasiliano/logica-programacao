#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  

  int p, a, b;cin>>p>>a>>b;

  int sum = a+b;

  // Alice
  // Bob

  int res = 0;
  if(p == 1) {
    if(sum%2 == 0) {
      res = 1;
    } else {
      res = 0;
    }
  } else {
    if(sum%2 == 0) {
      res = 0;
    } else {
      res = 1;
    }
  }

  cout << res << endl;
	return 0;
}
