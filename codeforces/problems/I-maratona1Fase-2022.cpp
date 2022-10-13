#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  for(int i = 0; i < 8; i++) {
    int n;cin >> n;
    if(n == 9) {
      cout << "F\n";
      return 0;
    }
  }
  
  cout << "S\n";
	return 0;
}