#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int v[10];

  for(int i = 0; i < 9; i++) {
    cin>>v[i];
  }

  cout << "Coluna 0: " << v[0] + v[3] + v[6] << endl;
  cout << "Coluna 1: " << v[1] + v[4] + v[7] << endl;
  cout << "Coluna 2: " << v[2] + v[5] + v[8] << endl;

	return 0;
}