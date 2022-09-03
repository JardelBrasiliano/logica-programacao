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

  cout << "Linha 0: " << v[0] + v[1] + v[2] << endl;
  cout << "Linha 1: " << v[3] + v[4] + v[5] << endl;
  cout << "Linha 2: " << v[6] + v[7] + v[8] << endl;

	return 0;
}