#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, v[100];cin >> n;

  for(int i = 0; i < n; i++) {
    cin>>v[i];
  }

  int aux = 0;
  for(int i = 0; i < n; i++) {
    if(v[i]%2 == 0) aux++;
  }
  cout << aux << endl;
  
  aux = 0;
  for(int i = 0; i < n; i++) {
    if(v[i]%3 == 0) aux++;
  }
  cout << aux << endl;

  aux = 0;
  for(int i = 0; i < n; i++) {
    if(v[i]%4 == 0) aux++;
  }
  cout << aux << endl;

	return 0;
}