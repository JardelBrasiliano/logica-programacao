#include<bits/stdc++.h>
#include<string>

using namespace std;


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;cin>>n;

  int aux = 1;  
  int aux2 = 1;               

  cout << 0 << " ";

  for(int i = 1; i < n; i++) {
    if(i <= 2) {
      cout << aux;
      aux = 1;
    } else {
      int a = aux2+aux;
      aux = aux2;
      aux2 = a;
      cout << a;
    }
    if(i != n-1) {
      cout << " ";
    }
  }
  cout << endl;

	return 0;
}